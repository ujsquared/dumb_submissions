
/* sol by: uj
*  time : Thu Aug 14 10:53:29 PM IST 2025
*  rating :
*  problemNum : generateParenthesis 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<string>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ' << endl;;
    }
    cout << endl;
}
// idea was this, take a string s with size = 1, starting with '(';
// then keep on adding (, ) until the pair shit go to zero. Pair shit is an int initialized at 0.
// Pair Shit rises when we recurse through with ( and decreases when we recurse with (
void recurseParenthesis(int n, string s, vector<string>& res, int open, int close){
    if(s.length() == 2*n ){
        res.push_back(s);
        return;
    }

    if(open < n){
        s.push_back('(');
        recurseParenthesis(n, s, res, open+1, close);
        s.pop_back();
    }
    if(close < open){
        s.push_back(')');
        recurseParenthesis(n, s, res, open, close+1);
        s.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 3;
    vector<string> res;
    string s = "(";
    recurseParenthesis(n, s, res, 0, 0);
    cout << res.size();
    printVector(res);
    return 0;
}

