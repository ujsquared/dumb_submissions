
/* sol by: uj
*  time : Tue Jul  1 01:58:44 PM IST 2025
*  rating :
*  problemNum : countSubarrayXorK 
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
    vector<int> arr = {4, 2, 2, 6, 4};
    map<int, int> mp;
    mp[0] = 1;
    int target = 6;
    int preXor = 0;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
       preXor = preXor ^ arr[i]; 
       if(mp.find(preXor) != mp.end()){
           mp[preXor]++;
       }
       else{
           mp[preXor] = 1;
       }
       int a = preXor ^ target;
       count += mp[a];
    }
    cout << count;
    return 0;
}
