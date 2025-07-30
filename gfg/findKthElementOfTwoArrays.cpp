
/* sol by: uj
*  time : Thu Jul 24 03:28:03 AM IST 2025
*  rating :
*  problemNum : findKthElementOfTwoArrays 
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

int kthElement(vector<int>& a, vector<int>& b, int k){
    if(a.size() > b.size()) return kthElement(b, a, k);
    int m = a.size();
    int n = b.size();
    int left = k;

    int low = max(0, k-n), high = min(k,m);
    while(low<=high){
        int mid1 = (low+high) >> 1;
        int mid2 = left - mid1;
        
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if(mid1 < m) r1 = a[mid1];
        if(mid2 < n) r2 = b[mid2];
        if(mid1 - 1>=0) l1 = a[mid1 - 1];
        if(mid2 - 1>=0) l2 =b[mid2-1];

        if(l1<=r2 && l2<= r1){
            return max(l1,l2);
        }
        else if(l1>r2) high = mid1-1;
        else low = mid1+1;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}

