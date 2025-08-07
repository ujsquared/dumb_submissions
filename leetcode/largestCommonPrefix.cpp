
/* sol by: uj
*  time : Sat Aug  2 11:42:42 AM IST 2025
*  rating :
*  problemNum : largestCommonPrefix 
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

bool func(vector<string>& arr, int cnt){
    char curr = arr[0][cnt];
    for(int i = 1; i < arr.size(); i++){
        if(arr[i][cnt] != curr) return false;
    }
    return true;
}

string solve(vector<string>& arr){
    int currIndex = 0;
    if(arr.size() == 0 ) return "";
    bool flag = true;
    while(flag){
        if(arr[currIndex] == "") return "";
        for(int i = 1; i < arr.size(); i++){
            if(arr[i][currIndex] != arr[0][currIndex]){
                flag = false;
                break;
            }
        }
        if(flag){
            currIndex++;
        }
    }
    string prefixGuess = arr[0].substr(0, currIndex);
    return prefixGuess;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // vector<string> arr = {"", ""};
    vector<string> arr = {"flower","flow","flight"};
    cout << solve(arr);
    return 0;
}
