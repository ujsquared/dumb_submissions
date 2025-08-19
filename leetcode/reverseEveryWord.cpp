
/* sol by: uj
*  time : Tue Aug  5 12:18:52 AM IST 2025
*  rating :
*  problemNum : reverseEveryWord 
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
string reverseWords(string& s){
    int left = 0, right = s.size()-1;
    while(s[left] == ' ') left++;
    while(s[right] == ' ') right--;
    string word = "";
    string res = "";
    for (int i = left; i <= right; i++) {
        if(i == right){
            word += s[i];
            reverse(word.begin(), word.end());
            res += word;
            break;
        }
        if(s[i] == ' ' && word.size() != 0 ){
            reverse(word.begin(), word.end());
            res+= word;
            word = "";
            res += " ";
        }
        else if(s[i] != ' '){
            word.push_back(s[i]);
        }
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = " i like this program very much ";
    cout << reverseWords(s);
    return 0;
}

