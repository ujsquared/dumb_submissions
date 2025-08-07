
/* sol by: uj
*  time : Sat Aug  2 10:13:07 PM IST 2025
*  rating :
*  problemNum : rotateString 
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

bool rotateString(string s, string goal){
    int findFirst = s.find(goal[0]);
    if(s.size() != goal.size()) return false;
    int n = goal.size();
    for(int i = findFirst+1; i < s.size(); i++){
        if(s[i] != goal[i-findFirst]) {
            cout << "HERE 1" << endl;
            return false;}
    };
    int j = 0;
    for(int i = findFirst-1; i >= 0; i--){
        cout << s[i] << " " << goal[n-j-1] << endl;
        if(s[i] != goal[n-j-1]) return false;
        j++;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << rotateString("deabc", "abcde");
    return 0;
}

