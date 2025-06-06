/* sol by: uj
*  time : Mon Mar  3 01:43:27 PM IST 2025
*  rating :
*  problemNum : reverseArray 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    cout << "Original array: ";
    for(ll i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
