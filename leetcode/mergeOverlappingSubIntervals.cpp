
/* sol by: uj
*  time : Mon Jul  7 04:19:28 PM IST 2025
*  rating :
*  problemNum : mergeOverlappingSubIntervals 
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
    vector<vector<int>> arr = {{1,3},{2,6},{8,10},{15,18}};
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    result.push_back(arr[0]);
    for(int i = 1; i < n; i++){
       auto last = result.back();
       if(last[1] >= arr[i][0]){
           result.pop_back();
           result.push_back({last[0], max(last[1], arr[i][1])});
       }
       else{
           result.push_back(arr[i]);
       }
    }
    for(auto it: result){
        printVector(it);
    }
    return 0;
}

