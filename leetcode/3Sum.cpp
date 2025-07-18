
/* sol by: uj
*  time : Wed Jun 25 11:07:38 PM IST 2025
*  rating :
*  problemNum : 3Sum 
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
    vector<int> arr = {-2,-1,-1,1,1,2,2};
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());   
    int i = 0;
    for(int i = 0; i < arr.size(); i++){
        if(i <= 0 || arr[i] != arr[i-1] ){
        for(int z = i+1; z < arr.size(); z++){
            if(z <= i+1 || arr[z] != arr[z-1] )
            {
                int j = z+1; int k = arr.size()-1;    
                while(j < k){
                   int sum=arr[i]+arr[j]+arr[k]+arr[z]; 
                   if(sum < 0){
                       j++;
                   }
                   else if(sum > 0){
                       k--;
                   }
                   else{
                       result.push_back({arr[i], arr[z], arr[j], arr[k]});
                       j++; k--;
                       while(j < k && arr[j] == arr[j-1]) j++;
                       while(j < k && arr[k] == arr[k+1]) k--;
                   }
                }
            }
        }
    }
}

    cout << result.size() << endl;
    for(int z = 0; z < result.size(); z++){
        printVector(result[z]);
    }
    return 0;
}

