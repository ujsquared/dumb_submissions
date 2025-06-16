
/* sol by: uj
*  time : Tuesday 04 February 2025 12:54:21 PM IST
*  rating :
*  problemNum : 260A 
*  tags :
*/
#include<bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, n; cin >> a >> b >> n;
    for(ll i = 0; i <= 9; i++){
        if((a*10 + i) % b == 0){
            cout << a*10+i;
            string s(n-1, '0');
            cout << s << endl;
            return 0;
        }
    }
    cout << -1;
    return 0;
}

