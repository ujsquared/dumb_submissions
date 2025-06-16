
/* sol by: uj
*  time : Wednesday 29 January 2025 12:50:29 AM IST
*  rating :
*  problemNum : 230B 
*  tags :
*/
#include<bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;


void buildSieve(vector<bool>&v, ll n){
    for(ll i = 2; i*i <= n; i++){
        if(v[i] == true){
            for(ll j = i*i; j<= n; j+=i){
                v[j] = false; }
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll m ; cin >> m;
    ll n = 1e6+1;
    vector<bool> primeNumbers(n+1, true);
    primeNumbers[0] = false;
    primeNumbers[1] = false;
    buildSieve(primeNumbers, n);
    for(ll i = 0; i<m; i++){
        ll x; cin >> x;
        ll tmp = sqrt(x);
        if(primeNumbers[tmp] == true && tmp*tmp == x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
