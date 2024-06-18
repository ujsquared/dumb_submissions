#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    double max = 0;
    int last;
    for(int i = 1; i <= n ; i++){
        double t;
        cin >> t;
        if(ceil(t/m) >= max){
          max = ceil(t/m);
          last = i;  
        }
    }
    cout << last << endl;
}
