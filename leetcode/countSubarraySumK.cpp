
/* sol by: uj
*  time : Tue Jun 10 07:51:31 PM IST 2025
*  rating :
*  problemNum : countSubarraySumK 
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
    vector<int> arr = {3, 1, 2, 4, 3, 3, 5, 1};
    int k = 6;
    map<int, int> mp;
    mp[0] = 1;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
       sum+=arr[i];
       mp.insert();
    }
    int cnt=0;
    for(int i = 0; i < arr.size() ;i++ ){
        if(mp.find(sum-k) != mp.end())cnt++;
        sum += arr[0];
    }
    cout << cnt;
    return 0;
}

