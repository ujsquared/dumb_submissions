
/* sol by: uj
*  time : Sat Jun  7 02:18:45 AM IST 2025
*  rating :
*  problemNum : 0s1s2sSort 
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
    vector<int> arr = {1, 0, 2};
    int low = 0; 
    int mid = 0;
    int high = arr.size()-1;
    while(mid <= high){
        if(arr[mid] == 0){
           swap(arr[mid], arr[low]); 
           low++;
        }
        else if(arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }
        mid++;
    };
    printVector(arr);
    return 0;
}

