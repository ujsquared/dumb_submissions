#include <cerrno>
/* sol by: uj
*  time : Wednesday 15 January 2025 03:04:58 PM IST
*  rating :
*  problemNum : 166A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool custom_comparer(vector<ll> v1, vector<ll> v2){
    if(v1[0] != v2[0]) return v1[0] > v2[0];
    else{
        return v1[1] < v2[1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k; cin >> n >> k;
    vector<vector<ll>> v;
    for(ll i = 0; i < n; i++){
        ll p,t; cin >> p >> t;
        v.push_back({p,t});
    }
    sort(v.begin(), v.end(), custom_comparer);
    map<vector<ll>,ll> mp;
    for(ll i = 0; i < n; i++){
        if(mp.find(v[i]) == mp.end()){
            mp[v[i]] = 1;
        }
        else{
            mp[v[i]]++;
        }
    }
    cout << mp[v[k-1]];
    return 0;
}
