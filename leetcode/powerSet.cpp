
/* sol by: uj
*  time : Wed Aug 20 01:51:35 PM IST 2025
*  rating :
*  problemNum : powerSet 
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
    vector<int> given = {1, 2, 3};
    vector<vector<int>> result;
    int n = given.size();
    int numberOfSets = 1 << n;
    for(int i = 0; i < numberOfSets; i++){
        vector<int> s = {};
        int j = i;
        if(i == 0){
            result.push_back(s);
            continue;
        }
        else{
            for(int k = 0; k < n; k++){
                j = i;
                j = j >> k; 
                if(1&j) s.push_back(given[k]);
            }
            result.push_back(s);
        }
    }
    for(auto it: result){
        printVector(it);
    }
    cout << numberOfSets;
    return 0;

}

