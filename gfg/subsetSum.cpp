
/* sol by: uj
*  time : Sun Aug 17 05:02:04 PM IST 2025
*  rating :
*  problemNum : subsetSum 
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

void backtrack(int i, vector<int>& arr, vector<vector<int>>& res, vector<int>& curr){
    if(i >= arr.size()){
        res.push_back(curr);
        return;
    }

    // left branch;
    curr.push_back(arr[i]);
    backtrack(i+1, arr, res, curr);
    curr.pop_back();
    
    // right branch
    int j = i;
    while(arr[j] == arr[i]) j++;
    backtrack(j, arr, res, curr);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {2, 3};
    vector<vector<int>> res;
    vector<int> curr;
    backtrack(0, arr, res, curr);
    for(auto it: res){
        printVector(it);
    }
    return 0;
}

