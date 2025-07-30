
/* sol by: uj
*  time : Wed Jul 30 04:21:51 PM IST 2025
*  rating :
*  problemNum : medianInAnRowwiseSortedMatrix 
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
int lowerBound(vector<int>& arr, int target){ // smallest element greater than or equal to target
    int low = 0, high = arr.size()-1;
    int ans = arr.size();
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= target){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int upperBound(vector<int>& arr, int target){ // smallest element greater than target
    int low = 0, high = arr.size()-1;
    int ans = arr.size();
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > target){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}
int solve(vector<vector<int>>& mat){
    int low = INT_MAX, high = INT_MIN;
    for (int i = 0; i < mat.size(); i++) {
        low = min(low, mat[i][0]);
        high = max(high, mat[i][mat[0].size() - 1]);
    }
   int ans = high;
    while(low <= high){
       // find a mid => try to find elements to the left and to the right.
       int mid = (high+low)/2;
       // one more thing;
       //   we are going to just find leftTotal instead of rightTotal also.
       //   and wait for leftTotal to be equal to (n*m-1)/2;
       int leftTotal = 0;
       for(int i = 0; i < mat.size(); i++){
           leftTotal += upperBound(mat[i], mid);
       }
       int requiredCount = (mat.size()* mat[0].size())/2;
       //find left total and right total.
       if(leftTotal > requiredCount){
           ans = mid;
           high = mid - 1;
       }
       else low = mid + 1;
    }
    // Total them up.
    // If they are equal return.
    // If left > right => decrease mid => high = mid-1;
    // Else (right > left) => increase mid => low = mid+1;
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> mat = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    vector<int> arr = {1,3,5,2,6,9,3,6,9};
    cout << solve(mat);
    return 0;
}

