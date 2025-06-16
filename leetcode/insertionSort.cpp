
/* sol by: uj
*  time : Thu May 22 10:35:29 PM IST 2025
*  rating :
*  problemNum : insertionSort 
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
void solve(vector<int>& arr){
    // solved partition = (0,x)
    // unsolved partition = (x+1,len-1)
    // [0,1,2,.,(k),...x,x+1,x+2,......n]  x'th item belongs at the k'th positon
    // [ 1, 2, 0, 3, 4, 5]
    // Idea is to first find the place of x 
    // then swap it's way through to the correct position' 
    for(ll i = 0; i < arr.size(); i++){
        ll x = i;
        for(ll j = i; j>0 && arr[j-1] >= arr[j]; j--){
           swap(arr[j], arr[j-1]);
       }
        printVector(arr);
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

