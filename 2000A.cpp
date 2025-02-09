
/* sol by: uj
*  time : Friday 16 August 2024 08:54:24 PM IST
*  rating :
*  problemNum : 2000A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string s; cin >> s;
    ll index = s.find("10");
    cout <<  "Index = "<< index << endl;
    bool flag = false;
    if(s.find("10") == -1){
        flag = true;
    }
    else{
        cout << stoi(s.substr(index+2, s.length()-1)) << endl;
        if(stoi(s.substr(index, s.length()-1))<2){
            flag = true;
        }
    }
    if(flag == false) cout << "NO" << endl;
    else cout << "YES" << endl;
}
int main(){
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

