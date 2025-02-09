
/* sol by: uj
*  time : Wednesday 29 January 2025 02:31:46 PM IST
*  rating :
*  problemNum : 327A 
*  tags :
*/
#include<bits/stdc++.h>
#include <climits>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll extra0(0), extra0max(-1), count1(0);
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;    
        if(x == 1){
            count1++;
            if(extra0 > 0) extra0--;
        }
        if(x == 0){
            extra0++;
            if(extra0 > extra0max) extra0max = extra0;
        }
    }
    cout << extra0max+count1;
    return 0;
}

