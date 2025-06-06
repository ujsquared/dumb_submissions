
/* sol by: uj
*  time : Sun Jun  8 09:04:16 PM IST 2025
*  rating :
*  problemNum : stockBuySell 
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
    vector<int> arr = {7,1,5,3,6,4};
    int min = INT_MAX;
    int mx = 0;
    for(ll i = 0; i < arr.size(); i++){
        if(arr[i] < min) min = arr[i];        
        else if(arr[i] > min) mx = max(mx, arr[i] - min);
    }
    cout << mx;
    return 0;
}

