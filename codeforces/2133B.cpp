
/* sol by: uj
*  time : Sun Aug 24 09:01:56 PM IST 2025
*  rating :
*  problemNum : 2133B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void solve(){
    ll n; cin >> n;
    vector<ll> v;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    for(ll i = n-1; i > 0; i=i-2){
       sum += v[i] ;
    }
    if(n%2) sum+=v[0];
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}

