
/* sol by: uj
*  time : Wednesday 29 January 2025 12:00:34 PM IST
*  rating :
*  problemNum : 268B 
*  tags :
*/
#include<bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m; cin >> n >> m;
    vector<ll> a(n+1), l(n+1), p(n+1);
    set<ll> setA;
    for(ll i = 1; i<=n; i++){
        cin >> a[i];
    }
    l[n] = 1;
    setA.insert(a[n]);
    for(ll i = n-1; i>0; i--){
        ll key = a[i];
        if(setA.find(key) == setA.end()){
            l[i] = l[i+1] + 1;
            setA.insert(key);
        }
        else{
            l[i] = l[i+1];
        }
    }
    for(ll i = 0; i < m; i++){
        ll x; cin >> x;
        cout << l[x] << endl;
    }

    return 0;
}

