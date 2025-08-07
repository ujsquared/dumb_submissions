
/* sol by: uj
*  time : Sat Aug  2 05:27:04 PM IST 2025
*  rating :
*  problemNum : isomorphicWords 
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
bool isIsomorphic(string& s, string& t){
    if(s.size() != t.size()) return false;
    int n = s.size();
    map<char, char> mp;
    for(int i = 0; i < n; i++){
        if(mp.find(s[i]) == mp.end()) {
            mp[s[i]] = t[i];
        }
        else if(mp[s[i]] != t[i]) return false;
        else cout << "I'm assuming the mp[s[i]] is => " << mp[s[i]] << "and hence it must be equal to t[i] whhich is =>"<< t[i] << endl;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "egg";
    string t = "dad";
    cout << isIsomorphic(s, t);
    return 0;
}

