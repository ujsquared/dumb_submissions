#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fib(int n){
    int first = 0;
    int second = 1;
    int final;
    while(second < n){
        final = first + second;
        first = second;
        second = final;
    }
    return first;
}

int main(){
   int n ;
   cin>>n;
   if(n == 1){
        cout << 1 << " " << 0 << " " << 0;
   }
   else if(n == 0) {
        cout << 0 << " " << 0 << " " << 0;
   }
   else if(n == 2){
        cout << 1 << " " << 1 << " " << 0;
   }
   else{
   cout << fib(n) <<" "<< fib(fib(n)) << " " << 0;
    }
}
