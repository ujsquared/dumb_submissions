
/* sol by: uj
*  time : Fri Aug 22 05:37:25 PM IST 2025
*  rating :
*  problemNum : 2132C2 
*  tags :
*/
#include <algorithm>
#include<bits/stdc++.h>
#include <numeric>
#include <pthread.h>
using namespace std;
typedef long long ll;

void printVector(vector<ll>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> cost;
    for(ll i = 0; i < 21; i++){
        ll c = pow(3, i+1) + i*pow(3, i-1);
        cost.push_back(c);
    }
    ll t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<ll> tr;
        while(n){
            // 20 ka binary representation kaise
            // 20%2
            ll bit = n%3;
            tr.push_back(bit);
            n /= 3;
        }
        ll min_k = accumulate(tr.begin(), tr.end(), 0);
        if(min_k > k) {
            cout << -1 << endl;
            continue;
        }
        k -= min_k; k /=2;
        for(int i = tr.size()-1; i >= 1; i--){
            if(tr[i] <= k){
                tr[i-1] += 3*(tr[i]);
                k -= tr[i];
                tr[i] = 0;
            } else{
                tr[i-1] += 3*k;
                tr[i] -= k;
                k = 0;
                break;
            }
        }
        ll ans = 0;
        for(ll i = 0; i < tr.size(); i++){
            ans += cost[i] * tr[i];
        }
        cout << ans << endl;
    }
    return 0;
}
