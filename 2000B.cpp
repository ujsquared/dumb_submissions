
/* sol by: uj
*  time : Thursday 15 August 2024 01:15:53 AM IST
*  rating :
*  problemNum : 2000B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin >> n;
    map<ll,bool> mp ;
    for(ll i = 1; i <=n ; i++) mp[i] = false;
    bool flag = false;
    for(ll i = 0; i < n; i++){
        ll a; cin >>a ;
        if(i == 0 || i == n-1) mp[a] = true;
        else if(mp[a-1] == true || mp[a+1] == true) mp[a] = true;
        else{
            flag = true;
        }
    }
    if (flag) cout << "NO" << endl;
    else cout << "YES" << endl;
}
int main(){
    ll t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

