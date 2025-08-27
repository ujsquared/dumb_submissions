
/* sol by: uj
*  time : Wed Aug 20 12:00:57 AM IST 2025
*  rating :
*  problemNum : minBitFlips 
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

int minBitFlips(int start, int goal) {
    long long startLL = start;
    long long goalLL = goal;
    long long count = 0;
    while(startLL != 0 || goalLL != 0){
        int startZero = 1 & startLL; 
        int goalZero = 1 & goalLL; 
        cerr << "startZero=> " << startZero; 
        cerr << "goalZero=> " << goalZero << "\n";
        count+=(1&startLL)^(1&goalLL);
        cerr << "count=> " << count << "\n";
        startLL >>= 1; goalLL >>= 1;
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << "minBitFlips(10, 7)=> " << minBitFlips(10, 7) << "\n";
    return 0;
}

