
/* sol by: uj
*  time : Sunday 15 December 2024 08:55:00 PM IST
*  rating :
*  problemNum : 4 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v1;
        vector<ll> v2(n,-1);
        vector<ll> v3;
        vector<ll> v4(n+1,-1);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            v1.push_back(x);
            if(v4.at(x) == -1){
                v2[i] = x;
                v4[x] = 1;
            }
        }
        for(ll i = 1; i <=n; i++){
            if(v4.at(i) == -1){
                v3.push_back(i);
            }
        }
        for(ll i = 0, j = 0; i < n; i++){
            if(v2[i] == -1){
                v2[i] = v3[j];
                j++;
            }
        }
        for(ll i = 0; i < n; i++){
            cout << v2[i] <<  " ";
        }
        cout << endl;
    }
}


