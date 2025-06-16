import subprocess
import re
import os
from collections import defaultdict

# 1. Get files that are new or staged (green in git status)
status = subprocess.check_output(['git', 'status', '--porcelain'], text=True)
files = []
for line in status.splitlines():
    if line.startswith('A ') or line.startswith('??') or line.startswith('M '):
        files.append(line[3:].strip())

# 2. Check header in each file and extract date/time
header_pattern = re.compile(
    r"/\* sol by: uj\n\*  time : (.*?)\n",
    re.DOTALL
)
date_by_file = {}
for file in files:
    try:
        with open(file, encoding='utf-8') as f:
            content = f.read(256)  # Only need the start
        m = header_pattern.search(content)
        if m:
            dt = m.group(1).strip()  # Full date+time+tz
            # Only date part (e.g. 'Sat Jun  7 2025')
            date_part = ' '.join(dt.split()[:4] + [dt.split()[-1]])
            date_by_file[file] = (date_part, dt)
    except Exception as e:
        pass  # Ignore files that can't be read or don't match

# 3. Group files by date
groups = defaultdict(list)
datetime_for_date = {}
for file, (date_part, dt) in date_by_file.items():
    groups[date_part].append(file)
    if date_part not in datetime_for_date:
        datetime_for_date[date_part] = dt  # Use the first time encountered

# 4. Commit per date group
for date, files in groups.items():
    dt = datetime_for_date[date]
    dt_git = dt.replace('IST', '+0530')  # Format for git
    subprocess.run(['git', 'add'] + files)
    env = dict(os.environ)
    env['GIT_AUTHOR_DATE'] = dt_git
    env['GIT_COMMITTER_DATE'] = dt_git
    subprocess.run(['git', 'commit', '-m', date], env=env)

print("Done. Commits created per date group.")

