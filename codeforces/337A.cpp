#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
int main () {
    int n, m; cin >> n >> m;
    int c = m;
    vector<int> v;
    while(c--){
        int f; cin >> f;
        v.push_back(f);
    }
    sort(v.begin(),v.end());
    int mini = 9999;
    for(int i = 0 ; i <= m - n ; i++){
        if (v[i+n-1] - v[i] < mini) {
            mini = v[i+n-1] - v[i];
        }
    }
    cout << mini;
    return 0;
}
