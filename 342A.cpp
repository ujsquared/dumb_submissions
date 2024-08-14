
/* sol by: uj
*  time : Tuesday 06 August 2024 11:48:21 AM IST
*  rating :
*  problemNum : 342A 
*  tags :
*  HAD TO LOOK UP
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    ll count[8] = {0};
    while(n--){
        ll x; cin >> x;
        count[x]++;
    }
    for(int i = 1; i < 8; i++){
        cout << "count of "<< i << "is " << count[i] <<endl;
    }
    if(count[5] == 0 && count[7] == 0 && count[2] >= count[4] && count[1] == count[4] + count[6] && count[2] + count[3] == count[4] + count[6]){
        for(int i=0; i < count[4] ; i++){
            cout << "1 2 4" << endl;
        }
        count[2] -= count[4];
        for(int i = 0; i < count[2]; i++){
            cout << "1 2 6" << endl;
        }
        for(int i = 0; i < count[3]; i++){
            cout << "1 3 6" << endl;
        }
    }
    else{
        cout << -1;
    }
    return 0;

}

