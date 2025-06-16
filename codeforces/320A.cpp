#include<iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    long long i = 0  ;
    int check = 0;    
     while(i < n.length()){
        if(n[i] == '1'){
            check = 1;
            if(n[i+1] == '4'){
                check = 2;
                if(n[i+2] == '4'){
                    check = 3;
                }
            }
        }
        else{
            cout << "NO";
            return 0;
        }
        i = i + check;
    }
     cout << "YES";
}
