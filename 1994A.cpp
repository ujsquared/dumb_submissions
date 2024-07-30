#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (int argc, char *argv[]) {
    ll t; cin >> t;
    while(t--){
        ll rows, columns; cin >> rows >> columns;
        ll arr[rows][columns];
        if(rows == 1 && columns == 1){
            ll x; cin >> x;
            cout << -1 << endl;
        }else{
            ll arr[rows][columns];       
            for(ll i = 0;  i < rows ; i++){
                for(ll j = 0; j < columns ; j++){
                    if (i == rows - 1 &&  j == columns - 1) {
                        cin >> arr[0][0] ; 
                    }
                    else if (j == columns - 1 &&  i < rows - 1) {
                        cin >> arr[i+1][0];
                    }
                    else{
                        cin >> arr[i][j+1];
                    }
                }
            }
            for(ll i = 0; i < rows ; i++){
                for(ll j = 0; j < columns ; j++){
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
