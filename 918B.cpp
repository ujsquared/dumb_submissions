
/* sol by: uj
*  time : Wednesday 28 August 2024 09:02:45 AM IST
*  rating :
*  problemNum : 918B 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,m; cin >> n >> m;
    map<string,string> mp;
    for(ll i=0;i<n;i++){
        string a,b; cin >> a >> b;
        mp[b] = a;
    }
    for(auto it:mp){
        cout << it.first << " " << it.second << endl;
    }
    for(ll i=0;i<m;i++){
        string a,b; cin >> a >> b;
        b = b.substr()
        cout << a << " " << b << "; " << "#" << mp[b];
        cout << endl;
    }

    return 0;
}

