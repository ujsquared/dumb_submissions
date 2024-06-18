#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    double x1,y1,x2,y2,x,y;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x >>y;
    if(((y-y2)*(x2-x1)) == ((y2-y1)*(x-x2))){
        cout << "TOWARDS";
    }
    if((y-y2)*(x2-x1) > (y2-y1)*(x-x2)){
        cout <<"LEFT";
    }
    if ((y-y2)*(x2-x1) < (y2-y1)*(x-x2)) {
        cout <<"RIGHT";
    }
    return 0;
}
