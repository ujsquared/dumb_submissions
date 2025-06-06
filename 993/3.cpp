
/* sol by: uj
*  time : Sunday 15 December 2024 08:18:18 PM IST
*  rating :
*  problemNum : 3 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;
    while(t--){
        ll m,a,b,c; cin >> m >> a >> b >> c;
        ll sum,fr,sr;fr=0;sr=0;sum=0;
        if(m > a){
            fr += a;
        }
        else{
            fr = m;
        }
        if(m > b){
            sr += b;
        }
        else{
            sr = m;
        }
        if(2*m - fr - sr > c){
            fr+=c;
            sum = fr+sr;
        }
        else{
            sum = 2*m;
        }
        cout << sum << endl;
        
    }
    return 0;
}

