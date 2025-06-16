
/* sol by: uj
*  time : Sunday 15 December 2024 12:08:40 PM IST
*  rating :
*  problemNum : 254A 
*  tags :
*/
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n; cin >> n; 
   map<ll, vector<ll>> mp;
   for(ll i = 0; i < 2*n ; i++){
       ll x; cin >> x;
       if(mp.find(x) == mp.end()){
           mp.insert({x, {i+1}});
       }
       else{
           mp[x].push_back(i+1);
       }
   }
   for(auto&it:mp){
       if(it.second.size() % 2 != 0){
           cout << -1 << endl;
           return 0;
       }
   }
   for(auto&it:mp){
       for(ll i = 0; i < it.second.size(); i=i+2){
            cout << it.second[i] << " " << it.second[i+1] << endl;
       }
   }
} 
