
/* sol by: uj
*  time : Wednesday 07 August 2024 01:07:44 AM IST
*  rating :
*  problemNum : 433A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    map<ll, ll> mp = {{100,0}, {200,0}};
    ll total = 0;
    while(n--){
        ll x; cin >> x;
        total += x; 
        mp.find(x)->second++;
    }
    if((mp[100] % 2 == 1 )||(mp[100] == 0 && mp[200] % 2 == 1) ){
        cout << "NO" << endl;
        return 0;
    }
    else{
        cout << "YES" << endl;
        return 0;
    }
    return 0;
}

