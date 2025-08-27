
/* sol by: uj
*  time : Tue Aug 26 08:08:18 PM IST 2025
*  rating :
*  problemNum : 2134A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void solve(){
    ll n, a, b ; cin >> n >> a >> b;
    if((n-a)%2 == 0 && (n-b)%2 == 0){
        cout << "YES" << endl; return;
    }
    if((n-b)%2 == 0 && a <= b){
        cout << "YES" << endl; return;
    }
    cout <<"NO"<<endl; return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}

