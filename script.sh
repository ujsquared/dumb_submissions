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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}
" >> "$1.cpp"
echo "created $1.cpp"
