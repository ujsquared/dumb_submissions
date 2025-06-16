#include<bits/stdc++.h>
#include<iostream>
    using namespace std;
int main(){
   int n, m;
   vector <int> a;
   vector <int> b;
   int maxRatio = 0;
   int count = 0;
   cin >> n;
   while(n--){
    int x;
    cin >> x;
    a.push_back(x);
   }
   cin >> m;
   while(m--){
    int x;
    cin >> x;
    b.push_back(x);
   }
   for(int i = 0; i<a.size(); i++){
    for(int j = 0; j<b.size();j++){
        if(b[j]/ a[i] > maxRatio && b[j]%a[i] == 0){
            maxRatio = b[j]/a[i];
            count = 1;
        }
        else if(b[j]/a[i] == maxRatio && b[j]%a[i] == 0){
            count +=1;
        }
    }
   }
   cout << count;
}
