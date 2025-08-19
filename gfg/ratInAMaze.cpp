
/* sol by: uj
*  time : Mon Aug 18 12:19:56 PM IST 2025
*  rating :
*  problemNum : ratInAMaze 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<string>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void backtrack(int i, int j, vector<vector<int>>& mat, string& s, vector<string>& res){
    if(i == mat.size()-1 && j == mat.size()-1){
        res.push_back(s);
        return;
    }
    if(mat[i][j] == 1){
        mat[i][j] = -1;
        // down
        if(i+1 < mat.size() && mat[i+1][j] == 1){
            s.push_back('D');
            backtrack(i+1, j, mat, s, res);
            s.pop_back();
        }
        // left
        if(j-1 >= 0 && mat[i][j-1] == 1){
            s.push_back('L');
            backtrack(i, j-1, mat, s, res);
            s.pop_back();
        }
        // right
        if(j+1 < mat.size() && mat[i][j+1] == 1){
            s.push_back('R');
            backtrack(i, j+1, mat, s, res);
            s.pop_back();
        }
        // up
        if(i-1 >= 0 && mat[i-1][j] == 1){
            s.push_back('U');
            backtrack(i-1, j, mat, s, res);
            s.pop_back();
        }
        mat[i][j] = 1;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    string s;
    vector<string> res;
    backtrack(0, 0, mat, s, res);
    printVector(res);
    return 0;
}

