
/* sol by: uj
*  time : Tue Jun 10 11:45:39 AM IST 2025
*  rating :
*  problemNum : rotateMatrix 
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
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printVector(matrix[0]);
    printVector(matrix[1]);
    printVector(matrix[2]);
    for(int i = 0; i < matrix.size(); i++){
        for(int j = i; j < matrix[i].size(); j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    printVector(matrix[0]);
    printVector(matrix[1]);
    printVector(matrix[2]);
    return 0;
}

