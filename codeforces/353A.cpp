
/* sol by: uj
*  time : Monday 13 January 2025 09:25:56 PM IST
*  rating :
*  problemNum : 353A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll sum1 = 0, sum2 = 0;
    bool oepair = false;
    for(ll i = 0; i < n; i++){
        ll x,y; cin >> x >> y;
        sum1+=x;
        sum2+=y;
        if((x+y)%2 != 0) oepair = true;
    }
    if(sum1%2==0 && sum2%2==0) cout << 0;
    else if((sum1 + sum2)%2 != 0 ){
        cout << -1;
    }
    else if (oepair==true && (sum1 + sum2)%2 == 0) {
        cout << 1; 
    }
    else{
        cout << -1;
    }
    return 0;
}
