#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cin >> n >> a >> b;
    a = n-a;
    if(n-b>a){
        cout <<  b;
    }
    else{
        cout << n-a+1;
    }
}
