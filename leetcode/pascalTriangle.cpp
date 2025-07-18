
/* sol by: uj
*  time : Mon Jun 16 08:11:50 PM IST 2025
*  rating :
*  problemNum : pascalTriangle 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<vector<int>>& arr){
    for(ll i = 0; i < arr.size(); i++){
        for(ll j = 0; j <= i; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
    cout << endl;
}

int ncr(int n, int r){
    int product = 1;
    for(int i = 1; i <= r; i++){
        product = product*(n-i+1);
        product = product/(i);
    }
    return product;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> pascalTriangle; 
    int n = 5;
    cout << ncr(5,2) << endl;
    return 0;
}

