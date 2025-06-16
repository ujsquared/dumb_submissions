
/* sol by: uj
*  time : Friday 09 August 2024 07:22:06 PM IST
*  rating :
*  problemNum : 242B 
*  tags :
*/
#include<bits/stdc++.h>
#include <climits>
#include <cstdint>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;

bool comparerLi(const vector<ll>&a, const vector<ll>&b){
    return a[0] > b[0]; 
}
bool comparerRi(const vector<ll>&a, const vector<ll>&b){
    return a[1] > b[1]; 
}
int main(){
    ll n; cin >> n;
    vector<vector<ll>> v;
    ll minLi = INT_MAX; ll maxRi = INT_MIN;
    ll index = 0;
    for(ll i = 0; i < n; i++){
        ll li,ri; cin >> li >> ri;
        v.push_back({li,ri});
        if(li <= minLi) minLi=li;
        if(ri >= maxRi) maxRi = ri;
    }
    bool flag = false;
    for(auto it = v.begin(); it != v.end(); it++){
        index++;
        if(it[0][0] <= minLi && it[0][1] >= maxRi) {
            flag = true;
            break;
        }; 
    }
    if(flag == true) cout << index;
    else{
        cout << -1;
    }
    
    return 0;
}

