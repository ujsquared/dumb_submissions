
/* sol by: uj
*  time : Tue May 13 03:15:24 PM IST 2025
*  rating :
*  problemNum : repetitions 
*  tags :
*/
#include<bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int maxCount = 1;
    for(int i = 0; i < s.size()-1; i++){;
        if(s[i] == s[i+1]){
            int j = i+1;
            while(j < s.size() && s[j] == s[i]) j++;
            maxCount = max(maxCount, j-i);
            i = j-1;
        };
    }
    cout << maxCount;
    return 0;
}

