
/* sol by: uj
*  time : Friday 23 August 2024 12:39:53 AM IST
*  rating :
*  problemNum : 350A 
*  tags :
*/
#include<bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
    ll n, m; cin >> n >> m;
    set<ll> v1;
    set<ll> v2;
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        v1.insert(x);
    }
    for(ll i = 0; i < m; i++){
        ll x; cin >> x;
        v2.insert(x);
    }
    ll a0 = *v1.begin();
    ll an = *(--v1.end());
    ll b0 = *v2.begin();

    if(2*a0 > b0){
        cout << -1;
        return 0;
    }
    else{
        for(ll i = 2*a0; i < b0; i++){
            if(i >= an){
                cout << i;
                return 0;
            }
        }
        cout << -1;
    }
    return 0;
}

