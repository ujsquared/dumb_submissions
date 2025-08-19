
/* sol by: uj
*  time : Mon Aug  4 09:17:55 PM IST 2025
*  rating :
*  problemNum : longestPalindromicSubstring 
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

int expandAboutCenter(string&s, int left, int right){ // returns the max length upto which s[leftPtr]and s[rightPtr] are equal;
    int leftPtr = left, rightPtr = right;
    while(leftPtr >= 0 && rightPtr < s.size() && s[leftPtr] == s[rightPtr]){
        leftPtr--; rightPtr++; 
    }
    return rightPtr - leftPtr - 1;
}


string longestPalindromicSubstring(string& s){
    int mxLen = 1;
    int centerIndex; bool isEven = false;
    int startIndex, endIndex;
    for(int i = 0; i < s.size(); i++){
        int even = expandAboutCenter(s, i, i+1);
        int odd = expandAboutCenter(s, i, i);
        if(mxLen < odd || mxLen < even){
            if(odd >= even){
                startIndex = i - odd/2;
                endIndex =  i + odd/2;
            }
            else{
                startIndex = i - odd/2 + 1;
                endIndex =  i + odd/2;
            }
        }
        
    }
    cerr << "startIndex=> " << startIndex << "\n";
    cerr << "endIndex=> " << endIndex << "\n";
    string res = s.substr(startIndex, endIndex+1);
    cout << res.size();
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "xkarqzghhgfedcbabcdefgzdekx";
    cout << "LEN OF STRING IS => " << s.size() << endl;
    cout << longestPalindromicSubstring(s);
    return 0;
}

