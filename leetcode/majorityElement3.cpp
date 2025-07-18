
/* sol by: uj
*  time : Mon Jun 16 10:36:53 PM IST 2025
*  rating :
*  problemNum : majorityElement3 
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
    vector<int> arr  = {1,2,2,3,2};
    int count1 = 0;
    int count2 = 0;
    int elem1, elem2;
    for(int i = 0; i < arr.size(); i++){
        // cout << "elem1 =>" << elem1 << " ," << "elem2 => "<< elem2 << endl;
        // cout << "count1=>" << count1 << " ," << "count2 => "<< count2 << endl;
        if(arr[i] != elem2 && count1 == 0){
            count1 += 1;
            elem1 = arr[i];
        }
        else if(arr[i] != elem1 && count2 == 0){
            count2 += 1;
            elem2 = arr[i];
        }
        else if (arr[i] == elem1) {
            count1++; 
        }
        else if (arr[i] == elem2) {
            count2++; 
        }
        else{
            if(count2 > 0) count2--;
            if(count1 > 0) count1--;
        }
    }
    // cout << "FINAL" << endl;
    // cout << "elem1 =>" << elem1 << " ," << "elem2 => "<< elem2 << endl;
    // cout << "count1=>" << count1 << " ," << "count2 => "<< count2 << endl;
    int mx, count = 0;
    if(count1 <= 0 && count2 <= 0) cout << -1;
    else if(count1 > count2) mx = elem1 ;
    else if(count1 < count2) mx = elem2 ;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == mx) count++;
    }
    if(count > (arr.size()/3)) cout << mx;
    else cout << -1;
    return 0;
}

