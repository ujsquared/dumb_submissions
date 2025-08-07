/* sol by: uj
*  time : Fri Aug  1 08:41:34 PM IST 2025
*  rating :
*  problemNum : test 
*  tags :
*/
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

string reverseWords(string s) {
    string result;
    string word = "";
    auto count = s.size();
    int removeLeftSpace = 0;
    int removeRightSpace = count-1;
    while(s[removeLeftSpace] == ' ') removeLeftSpace++;
    while(s[removeRightSpace] == ' ') removeRightSpace--;
    for(int i = removeRightSpace; i >= removeLeftSpace; i--){
        if(i == removeLeftSpace){
            word += s[i];
            reverse(word.begin(), word.end());
            result+= word;
            break;
        }
        if((s[i] == ' ' && word.size() != 0)){
            reverse(word.begin(), word.end());
            result += word;
            word = "";
            result += " ";
            // if(i+1 == removeLeftSpace) word.push_back(s[i]);
            // reverse(word.begin(), word.end());
            // result += word;
            // if(i != removeLeftSpace) result.push_back(' ');
            // word = "";
        }
        else if(s[i] != ' '){
            word.push_back(s[i]);
        }
    } 
    return result;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "the sky is blue";
    cout << reverseWords(s);
    return 0;
}

