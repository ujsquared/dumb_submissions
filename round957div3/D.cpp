#include <bits/stdc++.h>
using namespace std;
typedef  long long ll ;
int main (int argc, char *argv[]) {
    ll t; cin >> t;
    while(t--){
        ll n,m,k; cin >> n >> m >> k;
        ll arry[n+2] ;
        for(ll i = 0 ; i <= n+1; i++){
            if ( i == 0 || i == n+1 ){
                arry[i] = m;
            }else{
                 cin >> arry[i];
            }
        }
    }
    return 0;
}
