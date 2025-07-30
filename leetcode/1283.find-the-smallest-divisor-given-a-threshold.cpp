// @leet start
class Solution {
public:
    bool possible(vector<int>& nums, int threshold, int possibleDivisor){
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i]/possibleDivisor;
            if(nums[i] % possibleDivisor > 0) sum+=1;
        }
        return sum <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(), nums.end());;
        if(threshold == n) return high;
        int ans = high;
        while(low<=high){
            int mid = (low+high)/2;
            int result = possible(nums, threshold, mid);
            if(result == true){
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
