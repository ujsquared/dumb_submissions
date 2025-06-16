#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    int a,b,c;
    a = sqrt((x*y)/z);
    b = sqrt((y*z)/x);
    c = sqrt((x*z)/y);
    cout << (a+b+c) * 4;
    return 0;
}
