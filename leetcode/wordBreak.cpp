
/* sol by: uj
*  time : Mon Aug 18 05:53:49 PM IST 2025
*  rating :
*  problemNum : wordBreak 
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

bool backtrack(int index, set<string>& dict, string& s, bool& result){
    if(index>=s.size()){
        result = result || true;
        return true;
    }
    for(int i = index; i < s.size(); i++){
        string check = s.substr(index, i-index+1);
        if(dict.find(check) != dict.end()){
            result = result || backtrack(i+1, dict, s, result);
        }
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> wordDict = {"leet", "code"};
    set<string> dict; 
    for(auto it: wordDict){
        dict.insert(it);
    }
    string s = "leetcode";
    bool finalResult = false;
    cout << backtrack(0, dict, s, finalResult);
    return 0;
}

