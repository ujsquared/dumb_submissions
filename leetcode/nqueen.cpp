
/* sol by: uj
*  time : Mon Aug 18 03:25:21 AM IST 2025
*  rating :
*  problemNum : nqueen 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<string>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }
    cout << endl;
}
void markingNotAllowedPositions(int i, int j, vector<string>& state){
    // making all in row = #
    cout << "check1" << endl;
    int n = state.size();
    for(int k = 0; k < n; k++){
        state[i][k] = '#';
    }
    cout << "check2" << endl;
    // making all in column = #
    for(int k = 0; k < n; k++){
        state[k][j] = '#';
    }
    
    // top left
    for(int k1 = i, k2 = j; k1 >= 0 && k2 >= 0; k1--,k2--){
        state[k1][k2] = '#';
    }
    // top right
    for(int k1 = i, k2 = j; k1 >= 0 && k2 < n; k1--,k2++){
        state[k1][k2] = '#';
    }
    // bottom left
    for(int k1 = i, k2 = j; k2 >= 0 && k1 < n; k1++,k2--){
        state[k1][k2] = '#';
    }
    // bottom right
    for(int k1 = i, k2 = j; k1 < n && k2 < n; k1++,k2++){
        state[k1][k2] = '#';
    }
    state[i][j] = 'Q';
    printVector(state);
}

void backtrack(int index, vector<string>& state, int target, vector<vector<string>>& result, int n){
    if(index >= state.size() || target == 0){
        result.push_back(state);
        return;
    }
    for(int i = 0; i < n; i++){
        if(state[index][i] == '.'){
            vector<string> originalState = state;
            markingNotAllowedPositions(index, i, state);
            state = originalState;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<string>> result;
    int n = 4;
    for(int i = 0; i < n; i++){
        vector<string> dots;
        for(int j = 0; j < n;j++){
            dots.push_back(".");
        }
        result.push_back(dots);
    }
    vector<string> test = {
        "....", "....", "....", "...."
    };
    markingNotAllowedPositions(2, 2, test);
    for(auto it: result){
        printVector(it);
    }
    return 0;
}
