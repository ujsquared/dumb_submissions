
/* sol by: uj
*  time : Fri Aug 22 01:02:10 AM IST 2025
*  rating :
*  problemNum : 2132C1 
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
    ll n;  cin >> n;
    vector<ll> res;
    while(n > 0){
        ll r = 1;
        ll k = 0;
        while(r < n){
            r *= 3; k++;
        }
        if(r==n) res.push_back(k);
        else {
            res.push_back(k-1);
            r = r/3;
        }
        n -= r;
    }
    printVector(res);
    ll c = 0;
    for(auto it: res){
        c += pow(3, it+1) + it*pow(3, it-1);
    }
    cout << c << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}

