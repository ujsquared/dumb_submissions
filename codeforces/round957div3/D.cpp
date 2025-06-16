#include <bits/stdc++.h>
using namespace std;
typedef  long long ll ;
int main (int argc, char *argv[]) {
    ll t; cin >> t;
    while(t--){
       ll n,m,k; cin >> n >> m >> k;
       char arry[n+2];
       arry[0] = 'L';
       arry[n+1] = 'L';
       for(int i = 0;  i < n+2; i++){
            cin >> arry[i];
       }
       ll currCell = 0;
       ll swimCell = 0;
       for(int i = 0; i < n+2; i++){
            if(arry[currCell] == 'L'){
                if(currCell+m > n){
                    currCell = n + 1;
                    break;
                }
                else {
                    for(int j = 1; j <= m; j++){
                        if(arry[currCell + j] == 'L' ) currCell = currCell + j;
                        else if (arry[currCell+j] == 'W' && arry[currCell + j + 1] != 'C') currCell = currCell + j;
                    }
                }
            }
            else if (arry[currCell] == 'W' && swimCell < k) {
                if(arry[currCell + 1] != 'C'){
                    currCell++;
                    swimCell++;
                }else{
                    break;
                }
            }

       }
       if(currCell >= n+1) cout << "YES"<<endl;
       else cout << "NO" << endl;
    }
    return 0;
}
