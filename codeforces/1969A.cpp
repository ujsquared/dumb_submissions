/* sol by: uj
*  time : Tuesday 30 July 2024 11:01:12 PM IST
*  rating :
*  problemNum : 1969A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n; cin >> n;
        vector<ll>v;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            v.push_back(x);
        }
        for(ll i = 0; i < n ; i++){
            ll frnd = i+1;
            ll bst = v[i];
            if(v[bst-1] == frnd){
                cout << 2 << endl;
                return ;
            }
        }
        cout << 3 << endl;
        return ;
}
int main (int argc, char *argv[]) {
    ll t; cin >> t;
    while(t--){
       solve(); 
    }
    return 0;
}
