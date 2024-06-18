#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   string t1;
   string t2 = " ";
   int tone=0, ttwo=0;
   for(int i = 0; i<n ; i++){
        string x;
        cin >> x;
        if(i == 0){
            t1 = x;
            tone +=1;
        }
        else{
            if(x != t1 && t2 == " "){
                 t2 = x;
                 ttwo += 1;
            }
            else if( x == t1){
                tone +=1;
            }
            else if( x == t2) {
                ttwo +=1;
            }
        }
   }
   if(ttwo < tone){
        cout << t1;
    } 
   else{
        cout << t2;
   }
}
