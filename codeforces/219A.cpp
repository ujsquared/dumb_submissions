#include<bits/stdc++.h>
#include <cmath>
#include<iostream>
#include <iterator>
using namespace std;
int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> count = {0}; 
    for(int i =0 ; i < 26; i++){
        count.push_back(0);
    }
    for(int i = 0; i < s.length(); i++){
        char character = s.at(i);
        int charValue = (int) character;
        int indexValue = charValue - 97;
        count[indexValue]++;
    }
    for(int i=0; i < 26; i++){
        if(count.at(i)%k != 0 ){
            cout << -1;
            return 0;
        }
    }
    for(int i=0; i < k; i++){
        for(int j=0; j < 26; j++){
            for(int z=0; z < count.at(j)/k;z++){
                cout << (char)(j+97);
            }
        }
    }
     
}
    
