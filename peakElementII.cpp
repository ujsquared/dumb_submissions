
/* sol by: uj
*  time : Wed Jul 30 01:47:11 AM IST 2025
*  rating :
*  problemNum : peakElementII 
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

int findMaxRowOfColumn(vector<vector<int>>& mat, int col){
    int totalCols = mat.size();
    int mx = INT_MIN, indexMx = -1;
    for(int i = 0; i < totalCols; i++){
        if(mat[i][col] > mx){
            mx = mat[i][col]; indexMx = i;
        }
    }
    return indexMx;
}

vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();        
    int low = 0, high = n-1;
    cout << "M => " << m << " n=>" << n << endl;  
    vector<int> result;
    while(low<=high){
        int mid = (low+high)/2;
        cout << "MID" << mid << endl;
        int maxRow = findMaxRowOfColumn(mat, mid);
        cout << "maxRow" << maxRow << endl;
        int left = mid-1>=0 ? mat[maxRow][mid-1] : -1;
        int right = mid+1<=mat[0].size() ? mat[maxRow][mid-1] : -1;
        int midVal = mat[maxRow][mid];
        if(midVal > left && midVal > right){
            result.push_back(maxRow);
            result.push_back(mid);
            cout << "got something" << endl;
            return result;
        }
        else if(midVal > left) low = mid + 1;
        else high = mid - 1;
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // vector<vector<int>> mat = {{10,20,15},{21,30,14},{7,16,32}};
    vector<vector<int>> mat = {{1,4},{3,2}};
    printVector(mat[0]);
    printVector(mat[1]);
    vector<int> result = findPeakGrid(mat);
    printVector(result);
    return 0;
}

