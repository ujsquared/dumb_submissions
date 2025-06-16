

/* sol by: uj
*  time : Sunday 25 August 2024 05:42:15 PM IST
*  rating :
*  problemNum : gym3 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 10e9

void solve(){
    vector<pair<ll,ll>> v;
    ll n,s,m; cin >> n >> s >> m;
    for(ll i = 0; i < n; i++){
        ll x,y; cin >> x >> y;
        v.push_back({x,y});
    }
    if(v[0].first >=s){
       cout << "YES"<< endl;
       return;
    } 
    for(ll i =1; i < n; i++){
        if(v[i].first - v[i-1].second >= s){
            cout << "YES" << endl;
            return;
        }
    }
    if (m - v[v.size()-1].second >= s){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}

int main(){

    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

