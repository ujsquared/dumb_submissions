
/* sol by: uj
*  time : Sat May 24 12:57:27 PM IST 2025
*  rating :
*  problemNum : recursiveBubbleSort 
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
void bubbleSortRecursive(vector<int>& arr, int len){
    if(len <= 1) return ;
    else{
        for(ll i = 0; i < len; i++){
            if(arr[i] >= arr[i+1]) swap(arr[i], arr[i+1]);
        }
        bubbleSortRecursive(arr, len-1);
    }   
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {41,9,9,48,11,2,11,12,28,10,15,4,16,48};
    vector<int> arr2 = {1,3,4,5,2,3};
    bubbleSortRecursive(arr2, arr2.size());
    printVector(arr2);
    return 0;
}

