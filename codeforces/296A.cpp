
/* sol by: uj
*  time : Wednesday 14 August 2024 11:47:56 PM IST
*  rating :
*  problemNum : 296A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    map<ll,ll> mp;
    while(n--){
        ll x; cin >> x;
        if(mp.find(x) != mp.end()) mp[x]++;
        else mp.insert({x,1});
    }
    ll maxCount = 0; ll numJoMaxCount;
    for(auto it = mp.begin(); it != mp.end() ; it++){
        if(it->second >= maxCount){
            maxCount = it->second;
            numJoMaxCount = it->first;
        } 
    }
    ll othersCount = 0;
    for(auto it = mp.begin() ; it != mp.end() ; it++){
        if(it->first != numJoMaxCount ){
            othersCount += it->second;
        }
    }
    if(othersCount >= maxCount - 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;

}

