
/* sol by: uj
*  time : Sat Jun  7 11:03:22 PM IST 2025
*  rating :
*  problemNum : majorityElement 
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
    vector<int> arr = {2,2,2,4,3,4,2,2,2,4};
    int count = 1;
    int currMaj = arr[0];
    for(ll i = 1; i < arr.size(); i++){
        cout << "currMajor => " << currMaj << endl;
        cout << "count => " << count << endl;
       if(arr[i] == currMaj) count++; 
       else{
           count--;
       }
       if(count == 0) {
           currMaj = arr[i];
           count = 1;
       }
    }
    cout << currMaj;
    return 0;
}

