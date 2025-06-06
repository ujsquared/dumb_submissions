
/* sol by: uj
*  time : Mon Jun  2 10:46:14 AM IST 2025
*  rating :
*  problemNum : moveZerosToEnd 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // the idea is that [....0.....] after any zero, there are two possibilities either a zero, or non-zero, non-zero get's replaced and zero gets ignored  [ .... 0 0 1 ....] gets transformed to [..1 0 0 ....]
    vector<int> arr = {1, 2, 0, 0, 1, 0, 3, 4};
    int n = 8;
    int i;
    int j = -1;
    cout << "Hello World!" << endl;
    for(int i = 0; i < 8 && j < 8; i++){
        if(arr[i] == 0){
           j = i+1;
           while(arr[j] == 0 && j < arr.size()){
               j++; 
           }
           if(j == arr.size()) break;
           swap(arr[i], arr[j]);
        }
    }
    for(int i = 0; i < 8; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}

