
/* sol by: uj
*  time : Tue Jun 10 01:05:05 AM IST 2025
*  rating :
*  problemNum : setZerosMatrix 
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
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
    };
    int m = matrix.size();
    int n = matrix[0].size();
    set<int> rowsToSetZero;
    set<int> columnsToSetZero;
    int rowsZero;
    int colsZero;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
                if(i == 0) rowsZero = 0;
                if(j == 0) colsZero = 0;
            }
        }
    }
    // for(auto it: rowsToSetZero){
    //     cout << it << " ";
    //     for(int i = 0; i < matrix[it].size(); i++){
    //         matrix[it][i] = 0;
    //     }
    // }
    for(int i = 0; i < m; i++){
        if(matrix[i][0] == 0){
            for(int j = 0; j < n; j++){
                matrix[i][j] = 0;
            }
        }
    }
    cout << endl;
    for(int i = 0; i < n; i++){
       if(matrix[0][i] == 0){
           for(int j = 0; j < m; j++){
               matrix[j][i] = 0;
           }
       } 
    }
    // for(auto it: columnsToSetZero){
    //     cout << it << " ";
    //     for(int i = 0; i < matrix.size(); i++){
    //         matrix[i][it] = 0; 
    //     }
    // }
    cout << endl;
    printVector(matrix[0]);
    printVector(matrix[1]);
    printVector(matrix[2]);
    return 0;
}

