
/* sol by: uj
*  time : Thu Jun  5 11:20:06 AM IST 2025
*  rating :
*  problemNum : singleNumber 
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
    vector<int> arr = {4,1,2,1,2};
    int result = 0;
    for(ll i = 0; i < arr.size(); i++){
        result = result ^ arr[i];
    }
    cout << result;
    return 0;
}

