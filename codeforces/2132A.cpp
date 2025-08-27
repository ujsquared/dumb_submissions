
/* sol by: uj
*  time : Thu Aug 21 08:06:18 PM IST 2025
*  rating :
*  problemNum : 2132A 
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; string a; cin >> n >> a;
        int m; string b; cin >> m >> b;
        string c; cin >> c;
        string res=a;
        int b_ptr= 0;
        for(int i = 0; i < c.size(); i++){
            if(c[i] == 'D'){
                res.push_back(b[b_ptr++]);
            }
            else {
                res = b[b_ptr++] + res;
            }
        }
        cout << res << endl;
    }
    return 0;
}

