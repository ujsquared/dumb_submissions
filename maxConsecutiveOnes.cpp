
/* sol by: uj
*  time : Thu Jun  5 10:39:30 AM IST 2025
*  rating :
*  problemNum : maxConsecutiveOnes 
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

int solve(vector<int>& arr){
    int i = 0;
    int mx = 0;
    while(i < arr.size()){
        int count = 0;
        while(arr[i] == 1 && i < arr.size()){
            count++; i++;
        }
        mx = max(count, mx);
        if(i < arr.size()) i++;
    }
    return mx;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> q = {1,1,0,1};
    cout << solve(q) << endl;
    return 0;
}

