/* sol by: uj
*  time : Monday 03 February 2025 08:45:04 PM IST
*  rating :
*  problemNum : 315A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    vector<ll> va;
    vector<ll> vb;
    for(ll i = 0; i < n; i++){
        ll ai, bi; cin >> ai >> bi;
        va.push_back(ai); vb.push_back(bi);
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(i != j && va[i] == vb[j]){
                va[i] = 0;
            }
        }
    }
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        if(va[i] != 0) sum++;
    }
    cout << sum;
    
    return 0;
}
