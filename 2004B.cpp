
/* sol by: uj
*  time : Sunday 25 August 2024 12:10:54 PM IST
*  rating :
*  problemNum : 2004B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll t; cin >> t;
    while(t--){
        ll l,r,L,R;
        cin >> l >> r;
        cin >> L >> R;
        ll ir = min(r,R);
        ll il = max(l,L);
        if(ir < il) cout << 1;
        else{
            ll overlap = ir - il + 1;
            if(min(l, L) <  il) overlap++;
            if(max(r, R) > ir) overlap++;
            cout << overlap - 1 << endl;
        }
        cout <<  endl;
    }

    return 0;
}

