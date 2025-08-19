
/* sol by: uj
*  time : Sun Aug 17 12:38:39 PM IST 2025
*  rating :
*  problemNum : combinationSum1 
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

void backtrack(int index, int target, vector<vector<int>>& res, vector<int>& arr, vector<int>& curr){

    if(target == 0){
        res.push_back((curr));
        return;
    }

    if(index >= arr.size()) return;
    //left branch
    if(arr[index] <= target){
        curr.push_back(arr[index]);
        backtrack(index, target-arr[index], res, arr, curr) ;
        curr.pop_back();
    }

    // right branch
    backtrack(index+1, target, res, arr, curr);
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> result;
    vector<int> curr = {};
    backtrack(0, target, result, candidates, curr);
    for(auto it: result) printVector(it);
    return 0;
}

