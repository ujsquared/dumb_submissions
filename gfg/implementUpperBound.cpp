
/* sol by: uj
*  time : Tue Jul 15 01:51:42 AM IST 2025
*  rating :
*  problemNum : implementUpperBound 
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
int upperBound(vector<int>& arr, int target, int low, int high){
    if(low == high) return low;
    int mid = (low + high)/2;
    int ans = arr.size()-1;
    if(arr[mid] > target){
       ans = min(mid, upperBound(arr, target, low, mid)) ;
    }
    else{
        ans = min(high, upperBound(arr, target, mid+1, high));
    }
    if(ans == arr.size()-1 && target > arr[ans]) return arr.size();
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
    int target = 11;
    cout << upperBound(arr, target, 0, arr.size()-1);
    return 0;
}

