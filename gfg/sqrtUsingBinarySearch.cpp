
/* sol by: uj
*  time : Fri Jul 18 12:33:33 PM IST 2025
*  rating :
*  problemNum : sqrtUsingBinarySearch 
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

int sqrtCustom(vector<int>& arr, int target){
    int low = 0, high = target;
    int ans = target;
    while(low <= high){
        int mid = (low+high)/2;
        if(mid*mid == target) return mid;
        else if(mid*mid < target){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {1,2};
    cout << sqrtCustom(arr, 19);
    return 0;
}

