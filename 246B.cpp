
/* sol by: uj
*  time : Saturday 24 August 2024 02:01:20 AM IST
*  rating :
*  problemNum : 246B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    vector<ll> v; ll pivot, sum = 0;
    for(ll i = 0; i < n ; i++){
        ll x; cin >> x;
        if(i == 0) pivot = x;
        else{
            v.push_back(x);
            sum += x;
        }
    }
    ll mean = (sum + pivot)/ n;
    for(auto &it:v){
        if(it > mean){
            pivot += it - mean;
        }else if (it < mean) {
            pivot -= mean - it; 
        }
    }
    if(pivot == mean) cout << n << endl;
    else cout << n - 1 << endl;
    }

