#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (int argc, char *argv[]) {
    ll n; cin >> n;
    while(n--){
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        for(int i = 0; i < 5; i++){
            sort(v.begin(), v.end());
            v[0] = v[0] + 1;
        }
        cout <<  v[0] * v[1] * v[2] << endl;
    }
    return 0;
}
