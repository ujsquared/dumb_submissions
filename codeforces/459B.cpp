#include <bits/stdc++.h>
#include <climits>
#include <cstdint>
using namespace std;
typedef long long ll;
int main (int argc, char *argv[]) {
    ll n; cin >> n;
    ll maxb = 0;
    ll minb = INT_MAX ;
    ll minCount = 0;
    ll maxCount = 0;
    ll arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        minb = min(arr[i] , minb);
        maxb = max(arr[i], maxb);

    }
    for(int i = 0; i < n; i++){
        if(arr[i] == minb) minCount++;
        else if(arr[i] == maxb) maxCount++;
    }
    if (minb == maxb)cout << 0 << " " << (n*(n-1))/2;
    else{
        cout << maxb - minb << " " << minCount * maxCount;
    }
    return 0;
}
