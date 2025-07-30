
/* sol by: uj
*  time : Sat Jul 19 12:38:06 AM IST 2025
*  rating :
*  problemNum : minimumDaysBouquets 
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

bool possible(vector<int>&arr, int day, int m, int k){
    int n = arr.size();
    int cnt = 0;
    int noOfB = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= day){
            cnt++;
        }
        else{
            noOfB += (cnt/k);
            cnt = 0;
        }
    }
    noOfB += (cnt/k);
    return noOfB >= m;
}

int minDays(vector<int>& arr, int m, int k){
    long long val = m * 1ll * k * 1ll;
    if(arr.size() < val) return -1;
    else if(arr.size() == val) return *max_element(arr.begin(), arr.end());
    else{
        int low = *min_element(arr.begin(), arr.end());
        int high = *max_element(arr.begin(), arr.end());
        int ans = high;
        while(low <= high){
            int mid = (low+high)/2;
            if(possible(arr, mid, m, k)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
            
        }
        return ans;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> bloomDay = {1,10,3,10,2}; int m = 3, k = 1;
    cout << minDays(bloomDay, m, k);
    return 0;
}

