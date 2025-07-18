
/* sol by: uj
*  time : Thu Jul 17 12:31:04 AM IST 2025
*  rating :
*  problemNum : searchElementedRotatedI 
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

int search(vector<int>& arr, int target){
    int left = 0, right = arr.size()-1;
    int min = INT_MAX;
    while(left <= right){
        int mid = (left+right)/2;
        if(arr[mid] >= arr[left]){
            if(arr[mid] == target) return mid;
            else if(arr[left] <= target && target <= arr[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        } // left part is sorted
        else{ // right part is sorted 
            if(arr[mid] == target) return mid;
            else if(arr[right] >= target && target >= arr[mid]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {2,5,6,0,0,1,2};
    int target = 0;
    cout << search(arr, target);
    return 0;
}

