
/* sol by: uj
*  time : Mon Jul  7 02:19:01 AM IST 2025
*  rating :
*  problemNum : mergeTwoArrayNoExtraSpace 
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
    vector<int> arr1 = {1,4,8,10};
    vector<int> arr2 = {2,3,9};
    int n = arr1.size();
    int m = arr2.size();
    int gap = ceil((n+m)/2);
    return 0;
}

