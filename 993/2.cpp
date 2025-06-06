
/* sol by: uj
*  time : Sunday 15 December 2024 08:09:42 PM IST
*  rating :
*  problemNum : 2 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == 'p'){
                cout << 'q';
            }
            else if (s[i] == 'q') {
                cout << 'p';
            
            }
            else if(s[i] == 'w'){
                cout << 'w';
            }
        } 
        cout << endl;
    }

    return 0;
}

