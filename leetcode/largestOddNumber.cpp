
/* sol by: uj
*  time : Sat Aug  2 02:39:08 AM IST 2025
*  rating :
*  problemNum : largestOddNumber 
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
string largestOddNumber(string num) {
        int rightPtr = num.size()-1;
    while(((int)num[rightPtr]) % 2 != 0) rightPtr--;
    if(rightPtr == -1) return "";
    return num.substr(0, rightPtr);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "3212";
    cout << largestOddNumber(s);
    return 0;
}

