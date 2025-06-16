#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0;  i <= n; i++){
        for(int z = n-i; z> 0;z--) {cout << "  ";}
        for(int j = 0; j <=i ; j++){
            if(j == i){
                cout << j;
            }else{
                cout << j << " ";
            }
        }
        if(i > 0) cout << " ";
        for(int j = i-1; j >=0 ; j--){
            if(j == 0) cout << j;
            else{cout << j << " ";
            }
        }
    
    cout << endl;
    }
    for(int i = n-1; i >=0 ; i--){
        for(int z = n-i ; z>0;z--){cout << "  ";}
        for(int j = 0; j <= i; j++ ){
            if(j == i){
            cout << j ;
            }else{
            cout << j << " ";
            }
        } 
        if(i !=0){
            cout << " ";
        }
        for(int j = i-1; j>=0; j--){
            if(j == 0) cout << j;
            else{cout << j << " ";}
        }
    cout << endl;
    }
}
