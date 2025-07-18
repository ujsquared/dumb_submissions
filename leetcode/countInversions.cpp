
/* sol by: uj
*  time : Thu Jul 10 10:11:43 PM IST 2025
*  rating :
*  problemNum : countInversions 
*  tags :
*/
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int merge(vector<int>& arr, int low, int mid, int high){
    int i = low, j = mid+1;
    vector<int> result;
    int cnt = 0;
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            result.push_back(arr[i++]);
        }
        else{
            result.push_back(arr[j]);
            cnt += (mid-i+1);
            j++;
        }
    }
    while(i <= mid){
        result.push_back(arr[i++]);
    }
    while(j <= high){
        result.push_back(arr[j++]);
    }
    for(int z = low; z <= high; z++){
        arr[z] = result[z-low];
    }
    return cnt;
}
int mergeSort(vector<int>& arr, int low, int high){
    int cnt = 0;
    if(low>=high) return cnt;
    int mid = (low+high)/2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid+1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {5,4,3,2,1};
    int count = mergeSort(arr,0, 4);
    cout << count;
    return 0;
}
// i need to learn how to write iterative mergeSort
