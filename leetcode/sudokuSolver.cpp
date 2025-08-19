
/* sol by: uj
*  time : Tue Aug 19 02:29:58 AM IST 2025
*  rating :
*  problemNum : sudokuSolver 
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

bool isokay(int index, vector<vector<string>>& board, string digit){
    int i = index/9;
    int j = index%9;
    // left check
    for(int k1 = j; k1 >= 0; k1--){
        if(board[i][k1] == digit) return false;
    }
    // right check
    for(int k1 = j; k1 < board[0].size(); k1++){
        if(board[i][k1] == digit) return false;
    }
    // top check 
    for(int k2 = i; k2 >= 0; k2--){
        if(board[k2][j] == digit) return false;
    }
    // bottom
    for(int k2 = i; k2 < board.size(); k2++){
        if(board[k2][j] == digit) return false;
    }
    // box check
    int top; int right; int left; int bottom;
    if(i >= 0 && i <= 2) { top = 0; bottom = 2; }
    else if(i >= 3 && i <= 5) { top = 3; bottom = 5; }
    else { top = 6; bottom = 8; }

    if(j >= 0 && j <= 2) {left = 0; right = 2;}
    else if(j >= 3 && j <= 5) { left = 3; right = 5;}
    else { left = 6; right = 8;}
    
    for(int k1 = top; k1 <= bottom; k1++){
        for(int k2 = left; k2 <= right; k2++){
            if(board[k1][k2] == digit) return false;
        }
    }
    return true;

}

void backtrack(int index, vector<vector<string>>& board, bool& solved){
    int i = index / 9;
    int j = index % 9;
    if(index >= 81){
        solved = true;
        return;
    }
    if(board[i][j] != "."){
        backtrack(index+1, board, solved);
        return;
    }
    for(int k = 1; k <= 9; k++){
        string ok = (char)k;
        if(isokay(index, board,  ok)){
            string original = board[i][j];
            board[i][j] = ok;
            backtrack(index+1, board, solved);
            if(solved) return;
            board[i][j] = original;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<string>> board = {{"5","3",".",".","7",".",".",".","."},{"6",".",".","1","9","5",".",".","."},{".","9","8",".",".",".",".","6","."},{"8",".",".",".","6",".",".",".","3"},{"4",".",".","8",".","3",".",".","1"},{"7",".",".",".","2",".",".",".","6"},{".","6",".",".",".",".","2","8","."},{".",".",".","4","1","9",".",".","5"},{".",".",".",".","8",".",".","7","9"}};
    bool solved = false;
    backtrack(0, board, solved);
    for(auto it: board){
        printVector(it);
    }
    return 0;
}

