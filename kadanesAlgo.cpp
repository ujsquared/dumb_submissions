
/* sol by: uj
*  time : Sun Jun  8 05:04:12 PM IST 2025
*  rating :
*  problemNum : kadanesAlgo 
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
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4} ;
    int sum = 0, max_sum = INT_MIN;
    int left = 0;
    int right;
    for(ll i = 0; i < arr.size(); i++){
        sum += arr[i];
        if(sum > max_sum) {
            max_sum = sum; 
            right = i;
        }
        if(sum < 0) {
            sum = 0;
            left = i+1;
        }
    }
    cout << left << " " << right << endl;
    cin.tie(nullptr);
    return 0;
}

