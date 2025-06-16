
/* sol by: uj
*  time : Thu May 29 03:51:52 PM IST 2025
*  rating :
*  problemNum : secondMaxMin 
*  tags :
*/
#include<bits/stdc++.h>
#include <climits>
#include <utility>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    vector<int> arr = {3, 5, 0, 0, 4};
    printVector(arr);
    return 0;
}

