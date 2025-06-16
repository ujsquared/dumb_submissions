
/* sol by: uj
*  time : Tue Jun  3 04:38:19 PM IST 2025
*  rating :
*  problemNum : unionOfTwoArrays 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
vector<int> solve(vector<int>&a, vector<int>&b){
    vector<int> result;
    int i = 0;
    int j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] <= b[j]){
            if(result.size() == 0 || result.back() != a[i]) result.push_back(a[i]);
            i++;
        }
        else{
            if(result.size() == 0 || result.back() != b[j]) result.push_back(b[j]);
            j++;
        }
    }
    while(i < a.size()){
        if(result.back() != a[i]) result.push_back(a[i]);
    }
    while(j < b.size()){
        if(result.back() != b[j]) result.push_back(b[j++]);
    }
    return result;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 6, 7};
    vector<int> result = solve(a, b);
    printVector(result);
    return 0;
}

