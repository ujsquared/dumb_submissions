#include <bits/stdc++.h>
using namespace std;
int main () {
    string hello = "hello";
    string inp; cin >> inp;
    char last_char;
    int counter = 0;
    for (int i = 0; i < inp.length(); i++) {
        //cout << counter << " " << inp[i] << endl;
        if(inp[i] == hello[counter]) {
            counter++;
        }
    }
    if(counter >= 5){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
}
