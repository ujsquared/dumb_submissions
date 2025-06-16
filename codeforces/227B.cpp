#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> ma;
    int n;
    long long v = 0, p = 0;
    cin >> n;
    int arr1[n];
    for(int i = 0; i<n ; i++){
        int y;
        cin >> y; 
        ma[y] = i;
    } 
    int m;
    cin >> m;
    for(int j = 0 ; j < m ; j++ ){
        int x;
        cin >> x; 
        v += ma[x] + 1;
        p += n - ma[x];
    } 
    cout  << v << " " << p;
    // cout << "\nValue of n:" <<n << endl;
    // cout << "\nValue of m:" <<m ;
}