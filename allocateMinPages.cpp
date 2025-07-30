
/* sol by: uj
*  time : Mon Jul 21 11:15:24 AM IST 2025
*  rating :
*  problemNum : allocateMinPages 
*  tags :
*/
#include <algorithm>
#include<bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

bool checkPossibility(vector<int>& arr, int k, int pages){
    int currStud = 1;
    int pagesCurr = arr[0];
    for(int i = 1; i < arr.size(); i++){
        if(pagesCurr + arr[i] <= pages){
            pagesCurr += arr[i];
        }
        else{
            currStud++;
            pagesCurr = arr[i];
        }
    }
    if(currStud == k) return true;
    return false;
}

int findPages(vector<int>& arr, int k){
    if(arr.size() < k) return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    int ans = high;
    while(low<=high){
        int mid = (low+high)/2;
        if(checkPossibility(arr, k, mid)){
            high = mid-1;
            ans = mid;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    cout << findPages(arr, k);
    return 0;
}

