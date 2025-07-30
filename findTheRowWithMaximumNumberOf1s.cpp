
/* sol by: uj
*  time : Thu Jul 24 02:45:38 PM IST 2025
*  rating :
*  problemNum : findTheRowWithMaximumNumberOf1s 
*  tags :
*/
#include <algorithm>
#include<bits/stdc++.h>
#include <endian.h>
#include <iterator>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}


int lowerBound(vector<int>& arr, int k){
    int low = 0, high = arr.size();
    int ans = high;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] >= k){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    if(ans == arr.size()) return -1;
    return ans;
}

int solve(vector<vector<int>>&arr){
    int m = arr.size();
    int n = arr[0].size();
    int maxOnes = -1;
    int maxCount = 0;
    int maxOnesRowIndex = -1;
    for (int i = 0; i < m; ++i) {
        int count = n - lowerBound(arr[i], 1);
        if(count > maxCount){
            maxCount = count;
            maxOnesRowIndex = i;
        }
    }
    return maxOnesRowIndex;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> arr = {{0,1,1,1}, {0,0,1,1}, {1,1,1,1}, {0,0,0,0}};
    cout << solve(arr);
    return 0;
}

