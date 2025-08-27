
/* sol by: uj
*  time : Wed Aug 27 02:51:36 PM IST 2025
*  rating :
*  problemNum : 2134C 
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
    vector<ll> a(n);
    vector<ll> b(n+1, 0);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 1; i < n; i=i+2) b[i] = a[i];
    ll ans = 0;
    b[0] = min(b[1], a[0]);
    if(a[0]-b[0] > 0) ans +=a[0]-b[0];
    for(ll i = 2; i < n; i=i+2){
        ll limit = b[i - 1] - b[i - 2];
        b[i] = min(a[i], limit);
        if(i+1 < n) b[i] = min(b[i], a[i+1]);
        ans += a[i] - b[i];
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t; 
    while(t--) solve();
    return 0;
}

