
/* sol by: uj
*  time : Thu May 22 07:32:45 PM IST 2025
*  rating :
*  problemNum : bubbleSort 
*  tags :
*/
#include<bits/stdc++.h>
#include <utility>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void customSwap(int &a, int &b){
    a = a xor b;
    b = a xor b;
    a = a xor b;
    // cout << "a = " << a << " b = " << b << endl;
}
void solve(vector<int>& arr){
    ll arr_len = arr.size();
    for(ll i = arr_len-1; i >= 0; i--){
        for(ll j = 0; j <= i; j++){
            if(arr[j] >= arr[j+1]) customSwap(arr[j], arr[j+1]);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {41,9,9,48,11,2,11,12,28,10,15,4,16,48};
    solve(arr);
    printVector(arr);
    return 0;
}

