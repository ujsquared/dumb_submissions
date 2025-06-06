
/* sol by: uj
*  time : Sunday 25 August 2024 04:53:35 PM IST
*  rating :
*  problemNum : gym2 
*  tags :
*/
#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
void solve(){
        ll n; cin >> n;
        ll d; cin >> d;
        string s; cin >> s;
        for(int i = 0; i < n; i++){
            if(s[i] - '0' >= d){
                cout << s[i];
            }
            else{
                cout << d;
                for(int j = i ; j < n; j++){
                    cout << s[i];
                }
                cout << endl;
                return ;
            }
        }
        cout << d << '\n';
}
int main(){
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

