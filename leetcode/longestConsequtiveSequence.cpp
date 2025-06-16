
/* sol by: uj
*  time : Mon Jun  9 11:58:17 PM IST 2025
*  rating :
*  problemNum : longestConsequtiveSequence 
*  tags :
*/
#include<bits/stdc++.h>
#include <set>
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
    vector<int> arr = {100,4,200,1,3,2};
    sort(arr.begin(), arr.end());
    int mx = 1;
    int curr = 1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i+1] == arr[i] + 1) {
            curr++;
            mx = max(mx, curr);
        }
        else{
            curr = 1;
        }
    }
    cout << mx;
}

