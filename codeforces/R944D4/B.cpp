#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;
        bool flag = false;
        for (int j = 0; j < str.size()-1; j++)
        {
            if(str[j] != str[j+1]){
                char s2;
                flag = true;
                cout << "YES"<<endl;
                s2 = str[j];
                str[j] = str[j+1];
                str[j+1] = s2;
                cout << str << endl;
                break;
            }
        }
        if(flag == false){
            cout << "NO" <<endl;
        }
        
    }
    
    return 0;
}