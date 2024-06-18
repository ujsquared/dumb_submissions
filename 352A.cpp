#include<bits/stdc++.h>
#include <cmath>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count0 = 0;
    int count5 = 0;
    while(n--){
        int x;
        cin >>x;
        if(x == 0){
            count0++;
        }
        else if(x == 5){
            count5++;
        }
    }
    if(count0 == 0){
        cout << -1;
    }
    else{
        int num = (floor(count5/9))*9;
        if(num == 0){
            cout << 0 ;
            return 0;
        }
        else{
        for(int i = 0; i < num ; i++){
            cout<< "5" ;
        }
        for(int i = 0 ; i<count0; i++){
            cout << "0" ;
        }
    }
    }
}
