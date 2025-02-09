
/* sol by: uj
*  time : Monday 20 January 2025 11:55:44 AM IST
*  rating :
*  problemNum : 189A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,a,b,c,z; cin >> n >> a >> b >> c;
    vector<ll> v;
    ll ans = 0;
    for(ll x=0; x*a <= n; x++){
        for(ll y=0; x*a+y*b <= n; y++){
            z=0;
            ll rem = n - (a*x + y*b);
            if(rem % c == 0){
                z=rem/c;  
                ans = max(ans, x+y+z);
            }
        }
    }
    cout << ans;
    return 0;
}
