
/* sol by: uj
*  time : Wed May 28 05:02:24 PM IST 2025
*  rating :
*  problemNum : quickSort 
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

void quickSort(vector<int>& arr){
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // vector<int> arr = {41,9,9,48,11,2,11,12,28,10,15,4,16,48};
    vector<int> arr = {41,9,9,48,11};
    printVector(arr);
    quickSort(arr);
    printVector(arr);
    return 0;
}

