
/* sol by: uj
*  time : Tue Jul 15 11:48:54 AM IST 2025
*  rating :
*  problemNum : floorCeil 
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

int floorSolve(vector<int>& arr, int target, int low, int high){
    if(low > high) return -1;
    if(low == high){
        if(arr[low] <= target) return low;
        else return -1;
    }
    int mid = (high+low)/2;
    int ans = arr.size();
    if(arr[mid] > target){
        ans = floorSolve(arr, target, low, mid-1);
    }
    else{
        ans = max(mid, floorSolve(arr, target, mid+1, high));
    }
    if((ans == arr.size()-1 && arr[ans] < target)) return arr.size();
    if(ans == 0 && arr[ans] > target) return -1;
    return ans;
}
int ceilSolve(vector<int>& arr, int target, int low, int high){
    if(low == high) {
        if(arr[low] < target) return -1;
        return low;
    }
    int mid = (low + high)/2;
    int ans = arr.size()-1;
    if(arr[mid] >= target){
        ans = min(mid, ceilSolve(arr, target, low, mid));
    }
    else{
        ans = ceilSolve(arr, target, mid+1, high);
    }
    cout << ans;
    if(ans == arr.size()-1 && arr[ans] < target) return -1; 
    if(arr[ans] < target) return -1;
    return ans;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {8};
    int target = 9;
    cout << ceilSolve(arr, target, 0, arr.size()-1);
    return 0;
}

