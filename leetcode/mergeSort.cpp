//
// /* sol by: uj
// *  time : Fri May 23 03:20:20 PM IST 2025
// *  rating :
// *  problemNum : mergeSort 
// *  tags :
// */
// #include<bits/stdc++.h>
// #include <vector>
// using namespace std;
// typedef long long ll;
//
// void printVector(vector<int>& arr){
//     for(ll i = 0; i < arr.size(); i++){
//         cout << arr[i] << " ";
//     }
// }
// vector<int> merge(vector<int>& arr1, vector<int>& arr2){
//     vector<int> result;
//     ll i=0, j=0;
//     while(i < arr1.size() && j < arr2.size()){
//         if(arr1[i] <= arr2[j]){
//             result.push_back(arr1[i++]);
//         }
//         else if(arr1[i] >= arr2[j]){
//             result.push_back(arr2[j++]);
//         }
//     }
//     if(i != arr1.size() || j != arr2.size()){
//         if(j < arr2.size()){
//             result.push_back(arr2[j]);
//         }
//         else if(i < arr1.size()){
//             result.push_back(arr1[i]);
//         }
//     }
//     return result;
// }; // divides 
// vector<int> mergeSort(vector<int>& arr){
//     if(arr.size() == 1){
//         return arr;
//     }
//     else if (arr.size() == 2) {
//         if(arr[0] > arr[1]) swap(arr[0], arr[1]);
//         return arr;
//     }
//     else{
//         ll i = 0;
//         vector<int> subArr1;
//         vector<int> subArr2;
//         for(i = 0; i < arr.size()/2; i++){
//            subArr1.push_back(arr[i]); 
//         }
//         while(i < arr.size()){
//             subArr2.push_back(arr[i]);
//             i++;
//         }
//         vector<int> sortedSubArr1 = mergeSort(subArr1) ; 
//         vector<int> sortedSubArr2 = mergeSort(subArr2) ; 
//         vector<int> result = merge(sortedSubArr1, sortedSubArr2);
//         return  result;
//     }
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     vector<int> arr = {41,9,9,48,11,2,11,12,28,10,15,4,16,48, 0};
//     vector<int> arr1 = {4, 13, 15};
//     vector<int> arr2 = {6, 7};
//     vector<int> result = mergeSort(arr);
//     return 0;
// }
//
#include<bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr) {
    for(ll i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> merge(vector<int>& arr1, vector<int>& arr2) {
    vector<int> result;
    ll i = 0, j = 0;
    while(i < arr1.size() && j < arr2.size()) {
        if(arr1[i] <= arr2[j]) {
            result.push_back(arr1[i++]);
        }
        else {
            result.push_back(arr2[j++]);
        }
    }
    // Push remaining elements
    while(i < arr1.size()) {
        result.push_back(arr1[i++]);
    }
    while(j < arr2.size()) {
        result.push_back(arr2[j++]);
    }
    return result;
}

vector<int> mergeSort(vector<int>& arr) {
    if(arr.size() <= 1) {
        return arr;
    }
    
    vector<int> subArr1(arr.begin(), arr.begin() + arr.size()/2);
    vector<int> subArr2(arr.begin() + arr.size()/2, arr.end());
    
    vector<int> sortedSubArr1 = mergeSort(subArr1);
    vector<int> sortedSubArr2 = mergeSort(subArr2);
    
    return merge(sortedSubArr1, sortedSubArr2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {41,9,9,48,11,2,11,12,28,10,15,4,16,48,0};
    vector<int> arr2 = {4,1,3,9,7};
    vector<int> result = mergeSort(arr2);
    printVector(result);
    return 0;
}
