
/* sol by: uj
*  time : Thursday 30 January 2025 01:29:09 PM IST
*  rating :
*  problemNum : 237A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    map<pair<ll,ll>,ll> v;
    while(n--){
        ll h; ll m; cin >> h >> m;
        if(v.find({h,m}) == v.end()){
            v[{h,m}] = 1;
        }
        else{
            v[{h,m}]++;
        }
    }
    ll max = 0;
    for(auto &it:v){
        if(max < it.second) max = it.second;
    }
    cout << max;
    return 0;
}

