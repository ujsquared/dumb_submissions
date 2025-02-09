
/* sol by: uj
*  time : Tuesday 14 January 2025 07:09:19 PM IST
*  rating :
*  problemNum : 349A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll count25 = 0;
    ll count50 = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if(x == 25){
            count25++;
        }
        else if (x == 50) {
            if(count25>=1){
                count25--;
                count50++;
            }
            else{
                cout << "NO";
                return 0;
            }
        }
        else if (x==100){
            if(count25>=1 && count50>=1){
                count50--;
                count25--;
            }
            else if (count25>=3) {
                count25-=3;
            }
            else{
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
