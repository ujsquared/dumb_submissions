#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    for(int i=0; i+6 < s.length(); i++){
       if (s.substr(i,7) == "1111111" || s.substr(i,7) == "0000000"){
            cout << "YES";
            return 0;
       }
    }
    cout << "NO";
    return 0;
}
