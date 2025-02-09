
/* sol by: uj
*  time : Tuesday 28 January 2025 11:18:23 PM IST
*  rating :
*  problemNum : 433B 
*  tags :
*/
#include<bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

void printVector(vector<ll> &v){
    for(auto&it: v){
        cout << it << " ";
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    vector<ll> o;
    for(ll i = 0; i < n ;i++){
        ll x; cin >> x;
        o.push_back(x);
    }
    vector<ll> p;
    p = o;
    sort(p.begin(), p.end());
    for(ll i = 1; i<n; i++){
        o[i] = o[i-1] + o[i];
    }
    for(ll i = 1; i<n; i++){
        p[i] = p[i-1] + p[i];
    }
    ll m; cin >> m;
    for(ll i = 0; i<m ; i++){
        ll type,l,r; cin >> type >> l >> r;        
        if(type == 1 && l > 1) cout << o[r-1] -  o[l-2] << endl;
        else if(type == 1 && l == 1) cout << o[r-1] << endl;
        else if(type!=1 && l > 1) cout << p[r-1] - p[l-2] << endl;
        else if(type!=1 && l == 1) cout << p[r-1] << endl;
    }
    return 0;
}
