#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
int main (int argc, char *argv[]) {
    ll t,sx,sy,ex,ey; cin >> t >> sx >> sy >> ex >> ey;
    ll x = sx;
    ll y = sy;
    ll secs = 0;
    string s; cin >> s;
    for(ll i = 0 ; i < t ; i++){
        if(x == ex && y == ey){
            cout << secs << endl;
            return 0;
        }
        if(s[i] == 'N'){
            if(y < ey){
                y++;
            }

        }else if (s[i] == 'S') {
            if(y > ey){
                y--;
            }
        }else if (s[i] == 'E') {
            if(x < ex){
                x++;
            }
        }else if (s[i] == 'W') {
            if(x > ex){
                x--;
            }
        }
        secs++;
    }
    if(x != ex || y != ey){
        cout << -1;
    }
    else{
        cout << secs;
    }
    return 0;
}
