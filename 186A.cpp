
/* sol by: uj
*  time : Thursday 08 August 2024 09:40:07 PM IST
*  rating :
*  problemNum : 186A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    string s1, s2; cin >> s1 >> s2;
    ll pointOfDif = 0;
    map<char, ll> mp1;
    map<char, ll> mp2;
    bool flag = false;
    if(s1.length() != s2.length()){
        cout<< "NO"; 
        return 0;
    }
    else{
        for(ll i  = 0; i < s1.size() ; i++){
            if(mp1.find(s1[i]) == mp1.end()) mp1.insert({s1[i], 1});
            else{
                mp1.find(s1[i])->second++;
            }
            if(mp2.find(s2[i]) == mp2.end()) mp2.insert({s2[i], 1});
            else{
                mp2.find(s2[i])->second++;
            }
            if(s1[i] != s2[i]) pointOfDif++;
        }
        map<char,ll>::iterator it1 = mp1.begin();
        for (it1; it1 != mp1.end(); it1++) {
            if(it1->second != mp2[it1->first]) flag = true; 
        }
    }
    if(pointOfDif == 2 && flag == false) cout << "YES";
    else{
        cout << "NO";
    }
    return 0;
}

