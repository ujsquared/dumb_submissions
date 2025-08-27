
/* sol by: uj
*  time : Wed Aug 20 09:49:06 PM IST 2025
*  rating :
*  problemNum : twoOddNumbers 
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
    vector<int> arr = {4, 2, 4, 5, 2, 3, 3, 1};
    int c = 0;
    for(int i = 0; i < arr.size(); i++){
        c ^= arr[i];
    }
    int k = 0;
    while(((c >> k)&1) == 0) k++;
    vector<int> A;
    vector<int> B;
    for(int i = 0;i < arr.size(); i++){
        if((arr[i] >> k)&1) A.push_back(arr[i]);
        else B.push_back(arr[i]);
    }
    int x = 0, y = 0;
    for(int i = 0; i< A.size(); i++) x ^= A[i];
    for(int i = 0; i< B.size(); i++) y ^= B[i];
    return 0;
}

