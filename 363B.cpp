
/* sol by: uj
*  time : Wednesday 21 August 2024 11:46:22 AM IST
*  rating :
*  problemNum : 363B 
*  tags :
*/
#include<bits/stdc++.h>
#include <climits>
using namespace std;
typedef long long ll;

int main(){
    ll n, k ; cin >> n >> k;
    ll windowK = 0;
    vector<ll> v;
    ll index = 1;
    ll min = INT_MAX;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back(x);
        if(i < k){
            windowK += x;
            min = windowK;
        }
        else{
            windowK = windowK + x - v[i-k];
           if(windowK  < min){
               min = windowK;
               index = i-k+2;
           }
        }
    }
    cout << index;
    return 0;
}

