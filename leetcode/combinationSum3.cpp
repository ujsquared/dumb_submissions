
/* sol by: uj
*  time : Sun Aug 17 09:24:16 PM IST 2025
*  rating :
*  problemNum : combinationSum3 
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

void backtrack(int index, int target, int cntTarget, int currSum, vector<int>& curr, vector<vector<int>>& res){
    if(currSum == target && curr.size() == cntTarget){
        res.push_back(curr);
        return;
    }
    if(index > 9) return;

    //left branch
    curr.push_back(index);
    backtrack(index+1, target-index, cntTarget, currSum, curr, res);
    curr.pop_back();

    // right branch
    backtrack(index+1, target, cntTarget, currSum, curr, res);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int target = 9;
    int cntTarget = 3;
    vector<int> curr;
    vector<vector<int>> res;
    backtrack(1, target, cntTarget, 0, curr, res);
    for(auto it: res){
        printVector(it);
    }
    return 0;
}

