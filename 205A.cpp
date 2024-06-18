#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,index;
    int min = INT_MAX;
    int count = 0;
    cin >> n;
    for(int i = 1; i<=n ; i++){
        int x;
        cin >> x;
        if (x < min){
            min = x;
            count = 1;
            index = i;
        }
        else if(x == min){
            count +=1;
        }
    }
    if(count > 1){
        cout << "Still Rozdil";
    }
    else{
        cout << index;
    }
    return 0;
}