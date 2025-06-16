/* sol by: uj
*  time : Tuesday 28 January 2025 09:56:43 PM IST
*  rating :
*  problemNum : 285C 
*  tags :
*/
#include<bits/stdc++.h>
#include <functional>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n ; cin >> n;
    vector<ll> v;
    for(ll i = 0; i < n ; i++){
        ll x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll count = 0;
    for(ll i = 0; i < n; i++){
        count += abs(v[i] - (i + 1));
    }
    cout << count;
    return 0;
}
