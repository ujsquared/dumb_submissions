
/* sol by: uj
*  time : Friday 13 December 2024 06:10:11 PM IST
*  rating :
*  problemNum : 236B 
*  tags :
*/
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
ll cD(ll num){
   ll sum = 0; 
   for(ll i = 1; i*i<=num; i++){
       if(num%i==0){
           if(i*i==num){
               sum++;
           }
           else{
               sum+=2;
           }
       }
   }
   return sum;
}
int main(){
    ll a,b,c; cin >> a >> b >> c;
    vector<ll> v(a*b*c+5);
    ll ans=0;
    for(ll i = 1; i <= a; i++){
        for(ll j=1; j <= b; j++){
            for(ll k=1; k<=c; k++){
                ll d = i*j*k;
                if(v[d] == 0){
                    v[d] = cD(d);
                }
                ans += v[d];
            }
        }
    }
    cout << ans;
}
