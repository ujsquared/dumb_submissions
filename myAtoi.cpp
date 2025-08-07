
/* sol by: uj
*  time : Sun Aug  3 11:16:12 PM IST 2025
*  rating :
*  problemNum : myAtoi 
*  tags :
*/
#include<bits/stdc++.h>
#include <cctype>
#include <climits>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}
int myAtoi(string s) {
    bool numberStartFlag = false;
    bool negativeNumber = false;
    int startNumberIndex;
    int ptr = 0;
    long long res = 0;
    int sign = 1;
    while(ptr < s.size() && !isdigit(s[ptr]) && s[ptr] != '-' && s[ptr] != '+'){
        cout << "check1" << endl;
        if(!isdigit(s[ptr]) && s[ptr] != '-' && s[ptr] != '+' && s[ptr] != ' ') return 0;
        ptr++;
    }
    if(ptr >= s.size()) return 0;
    if(s[ptr] == '-') { 
        sign = -1;
        ptr++;
    }
    else if(s[ptr] == '+') ptr++;
    while(ptr < s.size() && isdigit(s[ptr]) ){
        int digit = s[ptr] - '0';
        res = res*10 + digit;
        if(sign*res >= INT_MAX) return INT_MAX;
        if(sign*res <= INT_MIN) return INT_MIN;
        ptr++;
    }
    return (int) res*sign;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << myAtoi("+1");
    return 0;
}

