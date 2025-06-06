
/* sol by: uj
*  time : Sat May 24 01:15:10 PM IST 2025
*  rating :
*  problemNum : recursiveInsertionSort 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
//recursive insertion sort, umm just give me the x, ill do it.
void recursiveInsertionSort(vector<int>& arr, int k){
    if(arr.size() == k) return ;
    ll x = arr[k];
    ll i = k;
    while(i > 0 && arr[i] < arr[i-1]){
        swap(arr[i], arr[i-1]);
        i--;
    }
    recursiveInsertionSort(arr, ++k);
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    vector<int> arr = {41,9,9,48,11,2,11,12,28,10,15,4,16,48};
    cin.tie(nullptr);
    recursiveInsertionSort(arr, 1);
    printVector(arr);
    return 0;
}

