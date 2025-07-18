
/* sol by: uj
*  time : Thu Jul 17 01:02:12 PM IST 2025
*  rating :
*  problemNum : findMin 
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


int findMin(vector<int>& arr){
    int low = 0, high = arr.size()-1;
    int min = INT_MAX;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] < min) min = arr[mid];
        if(arr[mid] == arr[low] && arr[mid] == arr[high]){
            high = high - 1;
            low = low + 1;
        }
        else if(arr[low] < arr[high] ){
            high = high - 1;
        }
        else if(arr[low] > arr[high]){
            low = low + 1;
        }
    }
    return min;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {5,1,2,3,4};
    cout << findMin(arr);
    return 0;
}

