#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    int cnt = 0;
    cin >> n;
    vector<int> x0;
    vector<int> y0;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        x0.push_back(x);
        y0.push_back(y);
    }
    for(int i = 0; i < n; i++){
        bool u = false;
        bool d = false;
        bool l = false;
        bool r = false;
        for(int j = 0; j<n ; j++){
           if(x0.at(i) < x0.at(j) && y0.at(i) == y0.at(j)) {
                r = true; 
           }      
           if(x0.at(i) > x0.at(j) && y0.at(i) == y0.at(j)){
                l = true;
           }
           if(y0.at(i) < y0.at(j) && x0.at(i) == x0.at(j)){
                d = true;
           }
           if(y0.at(i) > y0.at(j) && x0.at(i) == x0.at(j)){
                u = true;
           }
        }
        if(u && d && l && r){
            cnt++;
        }
    }
    cout << cnt;

}
