#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        int answer = 0;
        bool check = false;
    // i just want to count number of stretches of zero and one now
        int i = 0;
        while(i<x.length()){
            if(x[i] == '0') {
                answer++;
                while(i<x.length() && x[i] == '0'){
                    i++;
                }
                if(i !=x.length()){
                    check = true;
                }}
            else if(x[i] == '1'){
                answer++;
                while(i<x.length() && x[i] == '1'){
                    i++;
                }
            }
            }
        if(check){
            answer--;
        }
        cout << answer << endl;
    }
}
