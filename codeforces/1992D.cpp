
/* sol by: uj
*  time : Wednesday 07 August 2024 10:06:35 PM IST
*  rating :
*  problemNum : 1992D 
*  tags :
*/
#include<bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

ll solve(ll n , ll m , ll k, ll curr_pos,ll curr_swim, ll nextLogIndex ,ll nextCrocIndex,vector<char> v){
    if(v.at(curr_pos) == 'L'){
        if(curr_pos + m > n){
            return curr_pos + m;
        }
        else if(curr_pos + m > nextLogIndex){
            return nextLogIndex;
        }
        else if(v.at(curr_pos + m) != 'C'){
            return curr_pos + m;
        }
    }
}
int main(){

    return 0;
}

