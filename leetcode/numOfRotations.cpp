
/* sol by: uj
*  time : Thu Jul 17 03:46:42 PM IST 2025
*  rating :
*  problemNum : numOfRotations 
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

int numOfRotations(vector<int> arr){
    int low = 0, high = arr.size()-1;
    int mx = INT_MIN, maxIndex=0;
    int n = arr.size();
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[low] <= arr[mid]){
            if(arr[mid] > mx){
                mx = arr[mid]; maxIndex = mid;
            }
            low = mid+1;
        }
        else if(arr[mid] <= arr[high]){
            if(arr[high] > mx){
                mx = arr[high]; maxIndex = high;
            }
            high = mid-1;
        }
    }
    return maxIndex+1 < n?(maxIndex+1):0 ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {5,1,2,3,4};
    cout << numOfRotations(arr);
    return 0;
}

