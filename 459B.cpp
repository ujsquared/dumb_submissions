#include <bits/stdc++.h>
#include <climits>
#include <cstdint>
using namespace std;
typedef long long ll;
int main (int argc, char *argv[]) {
    ll n; cin >> n;
    ll max = INT32_MIN;
    ll min = INT32_MAX;
    ll maxdiff = 0;
    ll countMax = 0;
    ll countMin = 0;
    while(n--){
        ll x; cin >> x;
        if( x >= max ){
            if (x != max) {
            countMax =1;
            max  = x;
        }else{
            countMax += 1;
        }
        }
        if( x <= min){
            if(x!= min){
                countMin = 1;
                min  = x;
            }else{
                countMin++;
            }
        }
        maxdiff = max - min;
    }
    cout << maxdiff << " " << countMin *  countMax;

    return 0;
}
