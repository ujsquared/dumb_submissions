
/* sol by: uj
*  time : Sun Jul 20 12:28:56 PM IST 2025
*  rating :
*  problemNum : KthMissingPositiveNumber 
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

int solve(vector<int>& arr, int target){
    vector<int> newArr(1000, 0);
    vector<int> checkArr;
    vector<int> missing;
    for(int i = 0; i < arr.size(); i++) newArr[i] = arr[i];
    for(int i = 1; i <= 1000; i++) checkArr.push_back(i);
    int i = 0, j = 0;
    while(i <= 1000 && j <= 1000){
        if(newArr[i] != checkArr[j]){
            missing.push_back(checkArr[j]);
            j++;
        }
        else{
            i++; j++;
        }
    }
    return missing[target-1];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {2,3,4,7,11};
    int target = 5;//th
    cout << solve(arr, target);
    return 0;
}

