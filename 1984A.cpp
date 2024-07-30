#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (int argc, char *argv[]) {
    ll t; cin >> t;
    while(t--){
        ll n ; cin>>n;
        int arr[n];
        bool prevElemSame = true;
        for (ll i = 0; i < n ; i++) {
            cin  >> arr[i];
            if( i == 0) continue;
            else{
                if(arr[i] != arr[i-1]){
                    prevElemSame = false;
                } 
            }
        }
        bool bluePrint = false;
        char arr2[n];
        for(ll i = 0; i < n ; i++){
            if(i == 0 || i == n-1){
                arr2[i] = 'R';
            }else if (bluePrint == false) {
                arr2[i] = 'B';
                bluePrint = true;
            }
            else{
                arr2[i] = 'R';
            }
        }
        if(bluePrint && !prevElemSame){
            cout << "YES"<< endl;
            for(ll i = 0; i<n; i++){
                cout << arr2[i];
            }
        }
        else{
            cout <<"NO";
        }
        cout << endl;
    }
    return 0;
}
