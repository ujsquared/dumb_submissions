
/* sol by: uj
*  time : Tue Jul 22 02:11:06 PM IST 2025
*  rating :
*  problemNum : minimizeMaximumDistanceBwGasStations 
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

bool checkPossibility(vector<int>& arr, int k, double dist){
    int cnt = 0;
    for(int i = 0; i < arr.size()-1; i++){
        long double gap = arr[i+1] - arr[i];
        cnt += floor(gap/dist);
    }
    return (cnt<=k);
}

double solve(vector<int>& arr, int k){
    long double low = 0.0;
    long double high = 0.0;
    for(int i = 0; i < arr.size()-1; i++) high = max(high,(long double)(arr[i+1] - arr[i]));
    double ans = high;
    while(high - low >= 1e-7){
        long double mid = (low+high)/2.0;
        if(checkPossibility(arr, k, mid)){
            ans = mid;
            high = mid;
        }
        else low = mid;
    }
    return high;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {3, 6, 12, 19, 33, 44, 67, 72, 89, 95};
    cout << (long double)solve(arr, 2);
    return 0;
}

