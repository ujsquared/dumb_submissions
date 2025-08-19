
/* sol by: uj
*  time : Fri Aug 15 12:03:13 PM IST 2025
*  rating :
*  problemNum : generateSubsets 
*  tags :
*/
#include<bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}
void backtrackSubsets(int i, vector<int>& nums, vector<vector<int>>& res, vector<int>& subset){
    if(i >= nums.size()){
        res.push_back(subset);
        return;
    }

    // left branch
    backtrackSubsets(i+1, nums, res, subset);

    // right branch
    subset.push_back(nums[i]);
    backtrackSubsets(i+1, nums, res, subset);
    subset.pop_back();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res;
    vector<int> subset;
    backtrackSubsets(0, nums, res, subset);
    for(auto it: res){
        printVector(it);
    }
    cerr << "res.size()=> " << res.size() << "\n";
    return 0;
}

