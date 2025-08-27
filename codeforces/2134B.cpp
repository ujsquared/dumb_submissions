
/* sol by: uj
*  time : Tue Aug 26 08:39:19 PM IST 2025
*  rating :
*  problemNum : 2134B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<ll>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}


void solve(){
    ll n,k; cin >> n >> k;

    vector<ll> v(n);
    ll g = k+1;
    for(ll i = 0; i < n; i++) { 
        cin >> v[i]; 
        v[i] += (v[i] % g) * k;
    }
    vector<ll> c = v;
    printVector(c);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t; 
    while(t--) solve();
    return 0; 
}

