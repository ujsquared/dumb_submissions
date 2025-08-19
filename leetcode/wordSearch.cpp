
/* sol by: uj
*  time : Mon Aug 18 02:10:03 AM IST 2025
*  rating :
*  problemNum : wordSearch 
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
bool backtrack(int index, vector<vector<char>>& board, string& word, int i, int j){
    if(index >= word.size()){
        return true;
    }
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) {
        return false;
    }

    if(board[i][j] == word[index]){
        char original = board[i][j];
        board[i][j] = '#';
        int m = board.size(); int n = board[0].size();
        bool res = backtrack(index+1, board, word, i-1, j)|| backtrack(index+1, board, word, i, j-1)|| backtrack(index+1, board, word, i+1, j)|| backtrack(index+1, board, word, i, j+1);
        board[i][j] = original;
        return res;
    }
    return false;

}

bool exist(vector<vector<char>>& board, string word) {
    if(word.empty()) return false;
    int m = board.size();
    int n = board[0].size();

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == word[0]){
                if(backtrack(0, board, word, i, j)) return true;
            }
        }
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "AB";
    cout << backtrack(0, board, word, 0, 0);
    return 0;
}

