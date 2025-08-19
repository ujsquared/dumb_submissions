
/* sol by: uj
*  time : Sun Aug 17 10:13:21 PM IST 2025
*  rating :
*  problemNum : letterCombination 
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

void backtrack(int index, map<char, vector<char>>&mp, vector<string>& res, string curr, string& digits){
    if(index >= digits.size()){
        res.push_back(curr);
        return;
    }
    // left 
    int curr_digit = digits[index];
    curr.push_back(mp[curr_digit][0]);
    backtrack(index+1, mp,  res, curr, digits);
    curr.pop_back();
    // middle
    curr.push_back(mp[curr_digit][1]);
    backtrack(index+1, mp,  res, curr, digits);
    curr.pop_back();
    // right
    curr.push_back(mp[curr_digit][2]);
    backtrack(index+1, mp,  res, curr, digits);
    curr.pop_back();
    // fourth optional

    if(curr_digit == 7 || curr_digit == 9){
        curr.push_back(mp[curr_digit][0]);
        backtrack(index+1, mp,  res, curr, digits);
        curr.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<char, vector<char>> mp = {
        {'2', {'a', 'b', 'c'}},
        {'3', {'d', 'e', 'f'}},
        {'4', {'g', 'h', 'i'}},
        {'5', {'j', 'k', 'l'}},
        {'6', {'m', 'n', 'o'}},
        {'7', {'p', 'q', 'r', 's'}},
        {'8', {'t', 'u', 'v'}},
        {'9', {'w', 'x', 'y', 'z'}}
    };
    vector<string> res;
    string curr = "";
    string digits = "23";
    backtrack(0, mp, res, curr, digits);
    for(auto it: res){
        cout << it << endl;
    }

    return 0;
}

