
/* sol by: uj
*  time : Sunday 15 December 2024 12:22:28 AM IST
*  rating :
*  problemNum : 304A 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int sum = 0;
    for(int a = 1; a<=n; a++){
        for(int b=a+1; b<=n; b++){
            int c = a*a + b*b;
            if(sqrt(c) == floor(sqrt(c)) && sqrt(c)<=n){
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}
