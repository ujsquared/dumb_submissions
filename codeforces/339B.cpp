#include<iostream>
using namespace std;
int main(){
    long long n,m;
    cin >> n >> m;
    long long final, init = 1;
    long long time = 0;
    for(long long i = 0; i<m ; i++){
        cin >> final;
        if(init > final){
            time += n-(init-final);
        }
        else if(final > init){
            time += final - init;
        }
        init = final; 
    }
    cout << time;
}
