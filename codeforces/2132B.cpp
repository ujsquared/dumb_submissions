
/* sol by: uj
*  time : thu aug 21 08:15:17 pm ist 2025
*  rating :
*  problemnum : 2132b 
*  tags :
*/
#include<bits/stdc++.h>
#include <pthread.h>
using namespace std;
typedef long long ll;

void printvector(vector<ll>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    vector<ll> res;
    vector<ll> getdivisor;
    for(ll i = 1; i <= 18; i++){
        ll divisor = (ll)pow(10,i) + 1;
        getdivisor.push_back(divisor);
    }
    while(t--){
        ll n; cin >> n;
        vector<ll> final_res;
        ll r = 1;
        while(r < n){
            r *= 10;
            if(n % (r+1) == 0){
                final_res.push_back(n/(r+1));
            }
        }
        if(final_res.size() != 0) {
            cout << final_res.size()<<endl;
            sort(final_res.begin(), final_res.end());
            printvector(final_res);
        }
        else cout << 0 << endl;
    }
    return 0;
}

