
/* sol by: uj
*  time : Fri Jul 18 02:23:43 PM IST 2025
*  rating :
*  problemNum : kokoEatingBananas 
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

int calculateTotalHours(vector<int> &v, int hourly) {
    int totalH = 0;
    int n = v.size();
    //find total hours:
    for (int i = 0; i < n; i++) {
        totalH += ceil((double)(v[i]) / (double)(hourly));
    }
    return totalH;
}

int solve(vector<int>& piles, int h){
    //find max element first
    int maxElem = INT_MIN;
    for(int i = 0; i < piles.size(); i++) maxElem = max(piles[i], maxElem);

    int low = 0, high = maxElem;
    int mn = maxElem;

    while(low<=high){
        int mid = (low + high)/2;
        int count = calculateTotalHours(piles, mid);
        if(count <= h) {
            mn = min(mid, mn);
            high = mid - 1; 
        }
        else if(count > h) low = mid+1;
    }
    if(mn == 0) return 1;
    return mn;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {312884470};
    int h = 968709470;
    cout << solve(arr, h);
    return 0;
}

