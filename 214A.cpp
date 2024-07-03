#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long n,m;
    cin >> n >> m;
    long long a,b;
    long long  count = 0;
    for(long long a = 0; a < 1000  ; a++){
        b = n - a*a;
        if(a + b*b == m ){
            count++;
        }
    }
    cout << count;
}

