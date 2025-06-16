
/* sol by: uj
*  time : Monday 03 February 2025 05:03:13 PM IST
*  rating :
*  problemNum : 451B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    // check if already sorted, if yes return => 1 1
    // if not sorted, find first L, then find the R
    // reverse the iterators of that
    // check if sorted again
    bool isSorted = true;
    ll l = 0, r = 0;
    for(ll i = 0; i < n-1 ; i++){
        if(a[i] > a[i+1]){
            isSorted=false;
            break;
        }

    }
    if(isSorted){
        cout << "yes" << endl;
        cout << 1 << " " << 1;
        return 0;
    }
    for(ll i = 0; i < n; i++){
        if(a[i] > a[i+1]){
            l = i;
            break;
        }
    }
    r = l; 
    while(r < n-1 && a[r] >= a[r+1]){
        r++;
    }
    reverse(a.begin() + l, a.begin() + r + 1);
    bool isSorted2 = true;
    for(ll i = 0; i < n-1 ; i++){
        if(a[i] > a[i+1]){
            isSorted2=false;
            break;
        }

    }
    if(isSorted2 == true){
        cout << "yes" << endl;
        cout << l+1 << " " << r+1;
    }
    else{
        cout << "no"; 
        return 0;
    }

}
