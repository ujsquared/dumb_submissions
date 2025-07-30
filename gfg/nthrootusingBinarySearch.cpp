
/* sol by: uj
*  time : Fri Jul 18 12:55:55 PM IST 2025
*  rating :
*  problemNum : nthrootusingBinarySearch 
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

int nthRoot(int n, int m){// nth root of m
    int low = 0, high = m;
    int i = 0;
    while(low<=high){
        int mid = (low+high)/2;
        int prod = 1;
        i = 0;
        for(int i = 0; i<n; i++) prod *= mid;
        if(prod == m) return mid;
        else if(prod > m) high = mid-1;
        else low = mid+1;
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << nthRoot(2, 32);
    return 0;
}

