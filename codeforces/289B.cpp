
/* sol by: uj
*  time : Thursday 30 January 2025 10:39:33 PM IST
*  rating :
*  problemNum : 289B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,d; cin >> n >> m >> d;
    vector<ll> v;
    ll mean = 0;
    for(ll i = 0; i < m*n; i++){
        ll x; cin >> x;
        v.push_back(x);
        mean += x;
    }
    mean = mean / (n*m);
    ll cost = 0;
    ll mid = n*m/2;
    sort(v.begin(), v.end());
    for(ll i = 0; i < m*n; i++){
        if(i > 0) {
            ll diff = (v[i] - v[i-1])/d;
            if(d*diff != v[i] - v[i-1]){
                cout << -1 << endl;
                return 0;
            }
        }
        cost += abs(v[mid] - v[i])/d;
    }
    cout << cost << endl;
    return 0;
}
