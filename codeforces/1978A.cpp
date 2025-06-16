/* solution by  - uj
 * time file created - 14:50IST 30-07-2024;
 * solution submitted - ???
 * rating - 800
 * tags -  constructive algorithms , greedy, sortings, *800
 * */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool compareByFirstElem (vector<ll>&a, vector<ll>&b){
    return a[0] < b[0];
}

bool compareBySecondElem (vector<ll>&a, vector<ll>&b){
    return a[1] < b[1];
}
int main (int argc, char *argv[]) {
    ll t; cin >> t;
    while(t--){
        ll n;  cin>>n;
        vector<vector<ll>> v;
        for (ll i = 0; i < n; i++) {
            ll x; cin >> x;
            v.push_back({i, x});
        }
        sort(v.begin(), v.end(), compareByFirstElem);
        ll sum = v[(v.size() - 1)][1];
        v.pop_back();
        sort(v.begin(), v.end(), compareBySecondElem);
        sum = sum + v[(v.size() - 1)][1];
        cout << sum << endl;
    }
    return 0;
}
