
/* sol by: uj
*  time : Tuesday 13 August 2024 08:11:58 PM IST
*  rating :
*  problemNum : 2000A 
*  tags :
*/
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;

int main(){

    ll t; cin >>  t;
    while(t--){
        string s; cin >> s;
        bool hasTen = false;
        ll impIndex;
        string another;
        ll bachahuanum = 0;
        for(ll i = 0; i < s.length() ; i++){
            if(s[i] == '1' && s[i+1] == '0'){
                hasTen = true;
                impIndex = i+2;
                break;
            }
        }
        for(ll i = impIndex; i < s.length(); i++){
           another.push_back(s[i]); 
        }
        for(ll i = 0; i < another.length(); i++){
           bachahuanum = pow(10,(impIndex-i-1))*(another[i]);
           cout << bachahuanum << endl;
        }

    }
    return 0;
}

