
/* sol by: uj
*  time : Sun Jul  6 03:36:50 PM IST 2025
*  rating :
*  problemNum : binarySearch 
*  tags :
*/
#include<bits/stdc++.h>
#include <pthread.h>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int binarySearchHiKehde(vector<int>& arr, int target, int left, int right){
   if(left == right){
       return left ? arr[left] == target: -1;
   } 
   int middle = (left+right)/2;
   if(arr[middle] == target) return middle;
   else if(arr[middle] < target) return binarySearchHiKehde(arr, target, middle+1, right);
   else return binarySearchHiKehde(arr, target, left, middle-1);
};

int iterativeBinarySearch(vector<int>&arr, int target){
    int left = 0, right = arr.size()-1;
    while(left <= right){
        int mid = (left+right)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) left = mid+1;
        else right = mid-1;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {-1,0,3,5,9,12};
    int left = 0; int right = arr.size()-1;
    int target = 9;
    int ans = iterativeBinarySearch(arr, target);
    cout << ans;
    return 0;
}

