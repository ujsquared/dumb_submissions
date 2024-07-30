#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (int argc, char *argv[]) {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll arr[n+1];
        arr[0]  =  -1;
        for (ll i = 1; i < n+1; i++) {
            cin >> arr[i];         
        }
        ll minLoopCount = n;
        for(ll i = 1; i < n+1; i++){
            //start = arr[i];
            ll loopCount = 1;
            ll j = arr[i];
            while(arr[j] != i){
               j = arr[j];
               loopCount++;
            }
            if(loopCount > 1) minLoopCount = min(minLoopCount, loopCount);
            else minLoopCount = 2;
        }
        cout << minLoopCount<<endl;
    
    }
    return 0;
}
