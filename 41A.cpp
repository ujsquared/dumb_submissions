#include<iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s;
    cin >> t;
    for(int i = 0; i<s.length(); i++){
        if(s[i] != t[s.length()-1-i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
