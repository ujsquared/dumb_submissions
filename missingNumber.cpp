
/* sol by: uj
*  time : Tue May 13 03:12:30 PM IST 2025
*  rating :
*  problemNum : missingNumber 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll sum = (n*(n+1))/2;
    for(ll i = 0; i < n-1; i++){
        ll x; cin >> x;
        sum -= x;
    }
    cout << sum;
    return 0;
}

