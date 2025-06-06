
/* sol by: uj
*  time : Tue May 13 03:09:04 PM IST 2025
*  rating :
*  problemNum : weirdAlgorithm 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    cout << n << ' ';
    while(n != 1){
        if(n%2 == 0){
            n = n/2;
            cout << n << " ";
        }
        else{
            n = n*3+1;
            cout << n << " ";
        }
    }
    return 0;
}

