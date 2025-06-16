
/* sol by: uj
*  time : Tuesday 06 August 2024 10:43:36 AM IST
*  rating :
*  problemNum : 222A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> v;
    ll last_num, count = 0;
    for(ll i = 0; i < n ; i++){
        ll x; cin >> x;
        if(i == 0){
            last_num = x;
            count = 1;
        }
        else{
            if(x == last_num){
                count++;
            }else{
                last_num = x;
                count  = 1;
            }
        }
        // cin >> v[i];
    }
    // for(ll i = 0; i < n; i++ ){
    //     cout << v.at(i) << " ";
    // }
    if(count >= n-k+1 ){
        cout << n - count;
    }else{
        cout << -1;
    }
    // {1,2,3,4,5,5} if k = 5,6 answer = 4, else answer = -1;
    //  let  k = 5, n-k+1 = 2, and count should be 2 too!
    //  let k = 6, n-k+1 = 1, count is 2, which is greater than n-k+1
    return 0;
}

