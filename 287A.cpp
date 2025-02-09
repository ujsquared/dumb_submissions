
/* sol by: uj
*  time : Tuesday 28 January 2025 05:32:17 PM IST
*  rating :
*  problemNum : 287A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define size 4
bool checkfourSquares(char one, char two, char three, char four){
    ll count = 0;
    if (one == two) count++;
    if (one == three) count++;
    if (one == four) count++;

    if(count >=2 || count == 0) return true;
    return false;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<ll,char> mp;
    for(ll i = 0; i < 16; i++){
        cin >> mp[i+1];
    }
    ll traversalArr[4] = {6,7,10,11};
    for(ll i = 0; i<4; i++){
        ll pointer = traversalArr[i];
        // check first square top left 
        if(checkfourSquares(mp[pointer],mp[pointer-5],mp[pointer-4],mp[pointer-1]) == true){
            cout << "YES" << endl;
            return 0;
        }
        // check second square top right
        if(checkfourSquares(mp[pointer],mp[pointer-3],mp[pointer-4],mp[pointer+1]) == true){
            cout << "YES" << endl;
            return 0;
        }
        // check second square bottom left
        if(checkfourSquares(mp[pointer],mp[pointer+3],mp[pointer+4],mp[pointer-1]) == true){
            cout << "YES" << endl;
            return 0;
        }
        // check second square bottom right
        if(checkfourSquares(mp[pointer],mp[pointer+5],mp[pointer+4],mp[pointer+1]) == true){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

