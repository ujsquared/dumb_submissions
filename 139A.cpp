#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v;
    for(int i = 0; i < 7; i++){
        int x;
        cin >> x;
        v.push_back(x);
        sum +=x;
    }
    int j = 0;
    while(n > 0){
        if(j == 7){
            j = 0;
            continue;
        }
        else{
            n = n - v.at(j);
            // cout << n << endl;
            j++;
        }
    }
    cout << j;
}