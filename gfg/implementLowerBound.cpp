
/* sol by: uj
*  time : Mon Jul 14 10:40:17 PM IST 2025
*  rating :
*  problemNum : implementLowerBound 
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
int lowerBound(vector<int>& arr, int target, int low, int high){
    if(low == high) return low;
    int mid = (high+low)/2;
    int ans = arr.size()-1;
    if(arr[mid] >= target){
        ans = min(mid, lowerBound(arr, target, low, mid));
    }
    else{
        ans = min(high, lowerBound(arr, target, mid+1, high));
    }
    return ans;
}

int iterativeLowerBound(vector<int>& arr, int target){
    int left = 0, right = arr.size()-1;
    int ans = arr.size();
    while(left <= right){
        int mid = (left+right)/2;
        if(arr[mid] >= target){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
    int target = 11;
    cout << lowerBound(arr, target, 0, arr.size()-1);
    return 0;
}

