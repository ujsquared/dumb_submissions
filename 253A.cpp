
/* sol by: uj
*  time : Friday 13 December 2024 10:34:50 AM IST
*  rating :
*  problemNum : 253A 
*  tags :
*/
#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n,m; cin >> n >> m;
    char big,small;
    if (n > m) {
        big = 'B';
        small = 'G';
    }
    else{
        big = 'G';
        small = 'B';
    }
    ll more = n>m?n:m;
    ll less = n>=m?m:n;
    while(more > 0){  
        while(less > 0)
        {
            cout << big << small;
            more--; less--; 
        }
        while(more > 0)
        {
            cout << big; 
            more--;
        }

    }
}
