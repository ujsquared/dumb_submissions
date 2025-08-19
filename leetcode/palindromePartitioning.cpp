
/* sol by: uj
*  time : Mon Aug 18 12:43:37 AM IST 2025
*  rating :
*  problemNum : palindromePartitioning 
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
bool isPalindrome(string& s, int index, int final){
    if(index == final) return true;
    while(index <= final){
        if(s[index++] != s[final--] ) return false;
    }
    return true;
}
void backtrack(int index, vector<vector<string>>& res, vector<string>& curr, string& s){
    if(index >= s.size()){
        res.push_back(curr);
        return;
    }
    for(int i = index; i < s.size(); i++){
        if(isPalindrome(s, index, i)){
            curr.push_back(s.substr(index, i-index+1));
            backtrack(i+1, res, curr, s);
            curr.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string test = "aab";
    vector<vector<string>> res;
    vector<string> curr;
    backtrack(0, res, curr, test);
    for(auto it: res){
        printVector(it);
    }
    return 0;
}

