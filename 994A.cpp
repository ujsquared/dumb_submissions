/* sol by: uj
*  time : Friday 20 December 2024 08:49:14 PM IST
*  rating :
*  problemNum : 994A 
*  tags :
*/
#include<bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;
 
int main(){
    ll t; cin >> t;
    while(t--){
       ll n; cin >> n;
       vector<ll> v;
       string s;
       bool hasZero = false;
       bool allZero = true;
       bool twoCondn = false;
       for(ll i = 0; i < n; i++){
           ll x; cin >> x;
           s.append(to_string(x));
           s.append(",");
           v.push_back(x);
           if(x == 0) hasZero = true;
           else allZero = false;
       }
       if(hasZero) {
           for(ll j = 1; j < n-1; j++){
                if(v[j] == 0 && v[j-1] != 0){
                    twoCondn = true;
                }
           }
           if(twoCondn){
               cout << "2" << endl;
           }
           else{
               if(allZero){
                   cout << "0" << endl;
               }
               else{
                   cout << "1" << endl;
               }
           }
       }
       else{
           cout << "1" << endl;
       }
    }
    return 0;
}
