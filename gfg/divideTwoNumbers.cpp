
/* sol by: uj
*  time : Tue Aug 19 10:32:47 PM IST 2025
*  rating :
*  problemNum : divideTwoNumbers 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int dividend = 7;
    int divisor = -3;
    int quotient = 0;
    int k = 0;
    while(dividend >= divisor){
        int newDivisor = divisor;
        k = 0;
        while(newDivisor < dividend){
            newDivisor = newDivisor << 1; k++;
        }
        if(newDivisor > divisor ) newDivisor = newDivisor >> 1; 
        else k = 1;
        dividend -= newDivisor; quotient += k;
    }
    cerr << "quotient=> " << quotient << "\n";
    cerr << "remainder=> " << k << "\n";
    return 0;
}

