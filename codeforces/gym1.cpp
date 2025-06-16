
/* sol by: uj
*  time : Sunday 25 August 2024 04:33:13 PM IST
*  rating :
*  problemNum : gym1 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll y,k, n; cin >> y >> k >> n;
    ll s = k-(y%k);
    if( n < y + s) {
        cout << -1;
        return 0;
    }
    y = y+s;
    ll i = 0;
    while(k*i + y <= n){
        cout << s + k*i << " ";
        i++;
    }
    return 0;
}

