#!/bin/bash
todayDate=$(date)
echo "
/* sol by: uj
*  time : $todayDate
*  rating :
*  problemNum : $1 
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
    return 0;
}
" >> "$1.cpp"
echo "created $1.cpp"
