
/* sol by: uj
*  time : Tue Jul  1 03:03:45 AM IST 2025
*  rating :
*  problemNum : lenOfLongestSubArr 
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
    // vector<int> arr = {1, -2, 2, -8, 1, 7, 10, 23};
    // vector<int> arr = {2, 10, 4};
    vector<int> arr = {1, 0, -4, 3, 1, 0};
    map<int,int> mp;
    int prefixSum = 0;
    mp[0] = 0;
    int mx = 0;
    for(int i = 0; i < arr.size(); i++){
        prefixSum += arr[i];
        if(mp.find(prefixSum) == mp.end()){
           mp[prefixSum] = i; 
        }
        else{
            mx = max(mx, i-mp[prefixSum]);
        }
    }
    cout << mx;
    return 0;
}

