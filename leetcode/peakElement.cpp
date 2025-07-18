
/* sol by: uj
*  time : Thu Jul 17 11:23:52 PM IST 2025
*  rating :
*  problemNum : peakElement 
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

int peakElement(vector<int>& arr){
    int low = 0, high = arr.size()-2;
    int n = arr.size();
    if(n == 1) return 0;
    if(arr[0] > arr[1]) return 0;
    if(arr[n-1] > arr[n-2]) return n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] > arr[mid-1] && arr[mid+1] < arr[mid]) return mid;
        if(arr[mid] > arr[mid-1]){ // we are left of peak
          low = mid+1;
        }
        else if(arr[mid] < arr[mid-1]){
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {1,2,3,4,5,6,7,8,5,1};
    cout << peakElement(arr);
    return 0;
}

