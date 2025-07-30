// @leet start
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0, high = arr.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            int countBeforeMid = arr[mid] - mid - 1;
            if(countBeforeMid < k){
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return k + high + 1;
    }
};

// [2,3,4,7,11] k =5
// [(1),2,3,4,(5),(6),7,(8),(9),10,11,......]

//

//  Case (1)   Case (2) 
//
// Input
//
// 	│ arr =
// 	│ [2,3,4,7,11]
//
// 	│ k =
// 	│ 5
//
// Output
//
// 	│ 10
//
// Expected
//
// 	│ 9
//
//  Stdout
//
// 	│ i => 0 j => 1
// 	│ i => 1 j => 2
// 	│ i => 2 j => 3
// 	│ i => 3 j => 4
// 	│ i => 3 j => 5
// 	│ i => 3 j => 6
// 	│ i => 4 j => 7
// 	│ i => 4 j => 8
// 	│ i => 4 j => 9
// 	│ i => 4 j => 10
//
