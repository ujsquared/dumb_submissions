/* sol by: uj
*  time : Monday 03 February 2025 01:08:24 PM IST
*  rating :
*  problemNum : 462B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k; cin >> n >> k;
    vector<ll> p(26,0);
    for(ll i = 0; i < n ; i++){
        char c; cin >> c;
        p[c-'A']++;
    }
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());
    ll count = 0;
    ll sum = 0;
    while(k){
        if(p[count] >= k){
            sum += k*k;
            break;
        }
        else{
            sum += p[count] * p[count];
            k -= p[count];
            count++;
        }
    }
    cout << sum;
    return 0;
}
