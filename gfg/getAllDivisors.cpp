
/* sol by: uj
*  time : Thu Aug 21 01:08:30 AM IST 2025
*  rating :
*  problemNum : getAllDivisors 
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
vector<int> primeFactors(int n){
    int k = n;
    vector<int> primeFactors;
    while(k % 2 == 0){
        primeFactors.push_back(2);
        k = k/2;
    }
    for(int i = 3; i*i <= k; i++){
        while(k % i == 0){ 
            primeFactors.push_back(i);
            k = k/i;
        }
    }
    if(k != 1) primeFactors.push_back(k);
    return primeFactors;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> pf =primeFactors(24);
    map<int,int> cnt;
    vector<int> divisors = {1};
    for(int i = 0; i < pf.size();i++){
        cnt[pf[i]]++;
    }
    return 0;
}

