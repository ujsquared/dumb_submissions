#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool compareByFirstElement(const vector<ll>& a, const vector<ll>& b) {
    return a[0] < b[0];
}
int main (int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    map<ll,vector<ll>> mp;
    for(ll i = 0; i < n;  i++){
        ll x; cin >> x;
        mp[x].push_back(i);
    }
    vector <pair<ll,ll>> v;
    map<ll, vector<ll>>::iterator p = mp.begin();
    while(p !=mp.end())
    {
        if(mp[p->first].size() == 1) v.push_back({p->first, 0});
        else{
            set<ll> s;
            for(ll i = 1 ; i < mp[p->first].size(); i++){
                s.insert(abs(mp[p->first][i] - mp[p->first][i-1]));
            }
            set<ll>::iterator q=s.begin();
            if(s.size()==1)
                v.push_back({p->first,*q});
        }
        p++;
    }
    cout << v.size() << endl;
    for(ll i = 0; i < v.size() ; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}


