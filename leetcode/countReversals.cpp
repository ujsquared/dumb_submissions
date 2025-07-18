
/* sol by: uj
*  time : Sun Jul 13 07:49:39 PM IST 2025
*  rating :
*  problemNum : countReversals 
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
        if(arr[i] < arr[j]){
            result.push_back(arr[i++]);
        }
        else{
            result.push_back(arr[j++]);
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
int countPairs(vector<int>& arr, int low, int mid, int high){
    int i = low, j = mid+1;
    int cnt = 0;
    while(i <= mid && j <= high){
        long long z = 0;
        z += arr[j];
        z += arr[j];
        if(arr[i] > z){
            cnt += mid-i+1;
        }
        i++; j++;
    }
    return cnt;
}
int mergeSort(vector<int>& arr, int low, int high){
    int cnt = 0;
    if(low>=high) return cnt;
    int mid = (low+high)/2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid+1, high);
    cnt += countPairs(arr, low, mid, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {5,4,3,2,1};
    int count = mergeSort(arr,0, 1);
    cout << count;
    return 0;
}
