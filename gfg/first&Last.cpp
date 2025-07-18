
/* sol by: uj
*  time : Tue Jul 15 11:19:15 PM IST 2025
*  rating :
*  problemNum : first&Last 
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

int firstSearch(vector<int>& arr, int target){
    int n = arr.size();
    int left = 0, right = arr.size()-1;
    int ans = arr.size();
    while(left <= right){
        int mid = (left+right)/2;
        if(arr[mid] == target){
            ans = mid;
            right = mid-1;
        }
        else if(arr[mid] > target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return ans;
}

int lastSearch(vector<int>& arr, int target){
    int n = arr.size();
    int left = 0, right = n-1;
    int ans = n;
    while(left <= right){
        int mid = (left+right)/2;
        if(arr[mid] == target){
            ans = mid;
            left = mid+1;
        }
        else if(arr[mid] > target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {};
    int target = 6;
    int first = firstSearch(arr, target);
    int last = lastSearch(arr, target);
    if(first == arr.size() || last == arr.size()){
        cout << "{-1,-1}" << endl;
    }
    cout << first << endl;
    cout << last << endl;
    return 0;
}

