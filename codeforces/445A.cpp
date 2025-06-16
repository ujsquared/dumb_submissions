#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, m; cin >> n >> m;
    char matrix[110][110];
    for(int i = 0;  i < n; i++){
        for(int j  = 0; j < m; j++){
            cin >> matrix[j][i] ;
            if(matrix[j][i] == '.'){
                if((j+i) % 2 == 0)matrix[j][i] = 'B';
                else{
                matrix[j][i] = 'W';
                }
            }
            //cout << matrix[i][j];
        }
        //cout << endl;
    }
    for(int i=0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[j][i];
        }
        cout << endl;
    }
    return 0;
}
