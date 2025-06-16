
/* sol by: uj
*  time : Mon Jun  9 12:56:45 PM IST 2025
*  rating :
*  problemNum : recursionAllPermutationArr 
*  tags :
*/
#include <algorithm>
#include<bits/stdc++.h>
#include <climits>
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
    cin.tie(nullptr); vector<int> arr = {3, 7, 9, 1, 3};
    int bp = INT_MIN;
    int r_small = arr.size()-1;
    for(int i = arr.size()-2; i >= 0; i--){
        if(arr[i] < arr[i+1]) {
            bp = i;
            break;
        }
    }
    cout << bp << endl;
    for(int i=bp+1; i < arr.size() ; i++){
        if(arr[i]<arr[r_small]) r_small = i;
    }
    cout << r_small << endl;
    if(bp == INT_MIN) reverse(arr.begin(), arr.end());
    else{
        swap(arr[bp], arr[r_small]);
    }
    printVector(arr);
    return 0;
}

