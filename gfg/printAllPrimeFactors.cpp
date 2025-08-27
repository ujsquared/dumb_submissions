
/* sol by: uj
*  time : Thu Aug 21 12:40:22 AM IST 2025
*  rating :
*  problemNum : printAllPrimeFactors 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int given = 14;
    int n = given;
    vector<int> primeFactors;
    while(n % 2 == 0){
        primeFactors.push_back(2);
        n = n/2;
    }
    for(int i = 3; i*i <= n; i++){
        while (n % i == 0){ 
            primeFactors.push_back(i);
            n = n/i;
        }
    }
    if(n != 1) primeFactors.push_back(n);
    printVector(primeFactors);
    return 0;
}

