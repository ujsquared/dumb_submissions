#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll ;
int main (int argc, char *argv[]) {
    ll t; cin >> t;
    while(t--){
        ll n,k; cin >> n >> k;
        ll numPieces = k;
        vector<ll> v;
        ll operations = 0;
        for (ll i = 0; i < k; i++) {
            ll x; cin >> x;
            v.push_back(x); 
        }
        sort(v.begin(), v.end());
        for(ll i = 0; i < v.size(); i++){
            if(v.at(i) != 1 && i != v.size() - 1){
                operations += v.at(i) - 1;
            }
        }
        operations += n - v.at(k-1);
        cout << operations << "\n";
    }
}
