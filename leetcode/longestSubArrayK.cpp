
/* sol by: uj
*  time : Thu Jun  5 08:45:19 PM IST 2025
*  rating :
*  problemNum : longestSubArrayK 
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {1,2,3,1,1,1,1,3,3};
    int k = 6;
    // ll prefixSum = 0;
    // for (ll i = 0; i < arr.size(); i++){
    //     prefixSum += arr[i];
    //     ll rem = prefixSum - k;
    //     if(prefixSum == k) maxLen = max(maxLen, i+1);
    //     else{
    //         if(mp.find(rem) != mp.end() ) maxLen = max(maxLen,i-mp[rem]);
    //     }
    //     if(mp.find(prefixSum) == mp.end()) mp[prefixSum] = i;
    // }
    ll maxLen = 0;
    ll left = 0, right = 0;
    ll currSum = arr[0];
    while(right < arr.size()){
        if(currSum == k) {
            maxLen = max(maxLen, right-left+1);
            right++;
            if(right < arr.size())currSum += arr[right];
        }
        if(currSum < k) {
            right++;
            currSum += arr[right];
        }
        if(currSum > k) {
            currSum -= arr[left];
            left++;
        }

    }
    cout << maxLen;
    return 0;
}

