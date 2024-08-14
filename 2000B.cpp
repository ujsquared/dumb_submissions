
/* sol by: uj
*  time : Tuesday 13 August 2024 08:57:46 PM IST
*  rating :
*  problemNum : 2000B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;cin >> t;
    while(t--){
        ll n; cin >> n;
        bool flag = false;
        vector<bool> arr;
        for(ll i = 0 ; i <= n; i++) {
            arr.push_back(false);
        }
        for(ll i = 1; i < n+1; i++){
            ll x; cin >> x;
            if(i == 1){
                arr[x] = true;
            }
            else{
                if(arr[x-1] == true || arr[x+1] == true) continue;
                else{
                    flag = true;
                }
            }
        }
        if(flag == true) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}


