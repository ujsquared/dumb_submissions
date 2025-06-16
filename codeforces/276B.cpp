#include <bits/stdc++.h>
#include <map>
using namespace std;
typedef long long ll;
int main (int argc, char *argv[]) {
    string s; cin >> s;
    map<char,ll> m;
    ll i = 0;
    for(ll i = 0; i < s.size() ; i++){
        auto it = m.find(s[i]);
        if(it == m.end()){
            m.insert({s[i], 1});
        }else{
            it->second++;
        }
    }
    ll oddNumLetter = 0;
    for(auto it = m.begin(); it != m.end() ; it++){
        if(it->second % 2 == 1){
            oddNumLetter++;
        }
    }
    if(oddNumLetter <=1){
        cout << "First";
    }
    else if (oddNumLetter % 2 == 1) {
        cout << "First";
    }
    else{
        cout << "Second";
    }
    return 0;
}
