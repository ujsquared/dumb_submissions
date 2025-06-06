/* sol by: uj
*  time : Tuesday 21 January 2025 01:43:56 PM IST
*  rating :
*  problemNum : diceCombination 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

ll solve(ll x,  vector<ll>& dp){
    if(x < 0) return 0; 
    else if(dp[x] != -1) return dp[x];
    else{
        dp[x] = ((solve(x-1, dp)+solve(x-2, dp)+solve(x-3, dp)+solve(x-4, dp)+solve(x-5, dp)+solve(x-6, dp))%MOD);
        return dp[x];
    }     
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    vector<ll> dp(n+1,-1);
    dp[0] = 1;
    dp[1] = 1;
    cout << solve(n, dp);
    return 0;
}
