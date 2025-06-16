#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
   long long n,m;
   cin >> n >> m;
   vector<long long> v; 
   while(n--){
        long long x;
        cin >> x;
        if(x<0){
            x = abs(x);
            if(v.size() < m){
                v.push_back(x);
            }
            else{
                long long minIndex=0;
                long long min = v[0];
                for(int i = 0; i < m; i++){
                    if(v[i] < min){
                        minIndex = i;
                        min = v[i];
                    }
                }
                if(v[minIndex] < x){
                    v[minIndex] = x;
                }
            }
        }
   }
   long long sum = 0;
   for(int i = 0; i< v.size(); i++){
    sum+=v[i];
   }
   cout << sum;
}
