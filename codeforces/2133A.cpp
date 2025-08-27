
/* sol by: uj
*  time : Sun Aug 24 08:06:17 PM IST 2025
*  rating :
*  problemNum : 2133A 
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
    ll n;  cin >> n;
    vector<ll> arr;
    map<ll, ll> mp;
    for(int i = 0; i < n; i++) { 
        ll x ; cin >> x;
        arr.push_back(x);
        mp[x]++;
    }
    for(auto it: mp){
        if(it.second >= 2) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}

