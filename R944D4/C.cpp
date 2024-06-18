#include<bits/stdc++.h>
#include <utility>
using namespace std;
void solve(){
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    if(a>b){
    swap(a,b);
    }
    if(c>d){
    swap(c,d);
    }
    bool check1 = false;
    bool check2 = false;
    for (int j = a; j < b; j++) {
        if( j == c) {
            check1 = true;
        }
        if( j == d) {
            check2 = true;
        }
    }
    if((check1 && check2) || (!check1 && !check2)){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
