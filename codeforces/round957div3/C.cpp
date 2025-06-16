#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (int argc, char *argv[]) {
    ll t;cin>> t;
    while(t--){
        ll n,m,k; cin >> n >> m >> k;
        for(ll i = n; i > m; i--){
            cout << i << " ";
        }
        for(ll i = 1; i <= m ; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
