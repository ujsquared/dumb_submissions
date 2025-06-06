
/* sol by: uj
*  time : Tue Jun 10 01:55:39 PM IST 2025
*  rating :
*  problemNum : spiralMatrix 
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
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int left = 0; int right = matrix[0].size() - 1;
    int top = 0; int bottom = matrix.size() - 1;
    while(left <= right && top <= bottom){
        for(int i = left; i <= right; i++){
            cout << matrix[top][i] << " ";
        }
        top++;
        cout << endl;
        for(int i = top; i <= bottom ; i++ ){
            cout << matrix[i][right] << " ";
        }
        right--;
        cout << endl;
        if(top <= bottom ){
            for(int i = right; i >= left; i--){
                cout << matrix[bottom][i] << " ";
            }
        }
        bottom--;
        cout << endl;
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                cout << matrix[i][left] << " " ;
            }
        }
        left++;
        cout << endl;
    }
    return 0;
}

