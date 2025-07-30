// @leet start
class Solution {
public:
    bool checkPossibility(vector<int>& arr, int k, int sum){
        int cnt = 1;
        long long currSum = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > sum) return false;
            if(currSum + arr[i] <= sum){
                currSum += arr[i];
            }
            else{
                cnt++;
                currSum = arr[i];
            }
        }
        if(cnt <= k) return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        if(k > nums.size()) return -1;
        if(k == nums.size()) return *max_element(nums.begin(), nums.end());
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;
        while(low<=high){
            int mid = (low+high)/2;
            if(checkPossibility(nums, k, mid) == true){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
// @leet end
