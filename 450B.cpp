
/* sol by: uj
*  time : Thursday 30 January 2025 11:53:14 PM IST
*  rating :
*  problemNum : 450B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y, n; cin >> x >> y >> n;
    vector<ll> v(6);
    v[0] = x;
    v[1] = y;
    v[2] = y-x;
    v[3] = -x;
    v[4] = -y;
    v[5] = -y+x;
    ll modulo_one = n%6;
    ll fn;
    if(modulo_one == 0) fn = v[5];
    else fn = v[modulo_one-1];
    ll result = (fn % MOD + MOD) % MOD;
    cout << result << endl;
    return 0;
}

