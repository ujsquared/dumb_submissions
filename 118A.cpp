#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <string.h>
using namespace std;
int main (){
    string s;
    cin >> s;
    bool vowelsIn = false;
    for(int i = 0; i < s.size(); i++){
        if(tolower(s[i]) == 'a' || 
        tolower(s[i]) == 'e'||
        tolower(s[i]) == 'i'||
        tolower(s[i]) == 'o'||
        tolower(s[i]) == 'u'){
            vowelsIn = true;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(tolower(s[i]) == 'a' || 
        tolower(s[i]) == 'e'||
        tolower(s[i]) == 'i'||
        tolower(s[i]) == 'o'||
        tolower(s[i]) == 'u'|| 
        tolower(s[i]) == 'y')continue;
        else{
            cout << "." << (char)tolower(s[i]);
        }
    }
    return 0;
}

