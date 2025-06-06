
/* sol by: uj
*  time : Thu Jun  5 01:48:26 AM IST 2025
*  rating :
*  problemNum : 1890A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    bool flag = false;
    cin >> t ;
    while(t--){
        vector<ll> v;
        ll n; cin >> n;
        map<ll,ll> mp;
        while(n--){
            ll x; cin >> x; v.push_back(x);
            mp[x]++;
        }
        n = v.size();
        if(mp.size() == 1){
            cout << "YES" << endl;
        }
        else if (mp.size() == 2) {
            auto it = mp.begin();        
            int f1 = it->second;
            it++;
            int f2 = it->second;
            if(n%2 == 0 && f1 == n/2) cout <<"YES" << endl;
            else if(n%2 == 1 && abs(f1-f2) == 1) cout <<"YES" << endl;
            else{
                cout <<"NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

