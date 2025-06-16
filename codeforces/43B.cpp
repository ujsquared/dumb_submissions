
/* sol by: uj
*  time : Tuesday 06 August 2024 02:52:46 PM IST
*  rating :
*  problemNum : 43B 
*  tags :
*/
#include<bits/stdc++.h>
#include<iostream>
#include <map>
#include <string>
using namespace std;
typedef long long ll;

int main(){
    map<char, ll> mp1;
    map<char, ll> mp2;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for(ll i = 0; i < s1.length() ; i++){
        if(s1[i] == ' ') continue;
        else if(mp1.find(s1[i]) != mp1.end()){
            mp1.find(s1[i])->second++;
        }
        else{
            mp1.insert({s1[i], 1});
        }
    } 
    for(ll i = 0; i < s2.length() ; i++){
        if(s2[i] == ' ') continue;
        else if(mp2.find(s2[i]) != mp2.end()){
            mp2.find(s2[i])->second++;
        }
        else{
            mp2.insert({s2[i], 1});
        }
    } 
    map<char,ll>::iterator it = mp2.begin();
    for(it; it != mp2.end() ; it++){
        // cout << it->first << " => " << it->second << endl; 
        if(mp1.find(it->first) == mp1.end() || mp1.find(it->first)->second < it->second){
            cout << "NO"<<endl;
            return 0;
        }
    }
    cout << "YES";
    return 0;

}

