// @leet start
#include <algorithm>
#include <numeric>
class Solution {
public:
    bool canBeShipped(vector<int>& arr, int days, int capacity){
        int i = 0;
        int daysTaken = 0;
        while(i < arr.size()){
            int todayCapacity = capacity;
            int j = i;
            while( j < arr.size() && todayCapacity >= arr[j]){
                todayCapacity -= arr[j];
                i++; j++;
            }
            daysTaken++;
        }
        return daysTaken <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
       // capacity must start with max_element what say  
       // and high must be accumulate what say
       int low = *std::max_element(weights.begin(), weights.end());
       int high = 0;
       for(int z = 0; z < weights.size(); z++) high += weights[z];
       int ans = high;
       while(low<=high){
           int mid = (low+high)/2;
           bool result = canBeShipped(weights, days, mid);
           if(result){
               ans = mid;
               high = mid-1;
           }
           else low = mid+1;
       }
       return ans;
    }

};
// @leet end
