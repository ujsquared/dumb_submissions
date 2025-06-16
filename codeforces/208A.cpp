#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long i = 0;
    while(i < s.length()){
        if(i + 2 <= s.length()-1 && s.substr(i,3) == "WUB"){
                i = i+3;
        }
        else{
            cout << s.at(i);
            if( s.substr(i+1,3) == "WUB"){
                 cout << " ";
            }
            i++;
        }
    } 
}
