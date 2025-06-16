
/* sol by: uj
*  time : Sat May 10 05:18:06 PM IST 2025
*  rating :
*  problemNum : selection_sort 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {41,9,9,48,11,2,11,12,28,10,15,4,16,48};
    ll arr_len = arr.size();
    for(ll i = 0 ; i < arr_len; i++){
        ll curr_max = arr[0];
        ll curr_index = 0;
        for(ll j = 0; j <= arr_len-i-1 ; j++){
            if(curr_max <= arr[j]){
                curr_max = arr[j];
                curr_index = j;
            }
        }
        swap(arr[curr_index], arr[arr_len-1-i]);
        printVector(arr);
    }
}


