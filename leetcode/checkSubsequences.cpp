
/* sol by: uj
*  time : Fri Aug 15 05:11:51 PM IST 2025
*  rating :
*  problemNum : checkSubsequences 
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

bool backtrackSubsequenceSum(int i, int n, vector<int>& arr, int k, int currSum){
    if(i >= n){
        return false;
    }

    if(currSum == k) return true;
    // left branch
    if(backtrackSubsequenceSum(i+1, n, arr, k, currSum)) return true;

    // right branch
    if(backtrackSubsequenceSum(i+1, n, arr, k, currSum+arr[i])) return true;


    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {10,1,2,7,6,1,5};
    cout << backtrackSubsequenceSum(0, 8, arr, 81, 0);
    return 0;
}

