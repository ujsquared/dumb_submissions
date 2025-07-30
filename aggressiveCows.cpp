
/* sol by: uj
*  time : Mon Jul 21 08:57:38 AM IST 2025
*  rating :
*  problemNum : aggressiveCows 
*  tags :
*/
#include <algorithm>
#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;
typedef long long ll;

void printVector(vector<int>& stalls){
    for(ll i = 0; i < stalls.size(); i++){
        cout << stalls[i] << ' ';
    }
    cout << endl;
}

bool possible(vector<int>& stalls, int k, int distance){
    int n = stalls.size();
    int cntCows = 0;
    int lastPlaced = stalls[0]; int i = 0;
    while(i < stalls.size()){
        if(stalls[i] - lastPlaced >= distance){
            cntCows++;
            lastPlaced = i++;
            if(cntCows >= k) return true;
        }
        else{
            i++;
        }
    }
    return false;
}

int aggresiveCows(vector<int>& stalls, int k){
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low = 1;
    int high = stalls[n-1] - stalls[0];
    int ans = high;
    while(low <= high){
        int mid = (low+high)/2;
        if(possible(stalls, k, mid) == true){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;

}
// int maximumMinDistanceBwCows(vector<int>& stalls, int k){
//     sort(stalls.begin(), stalls.end());
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> stalls = {10, 1, 2, 7, 5};
    int k = 3;
    cout << aggresiveCows(stalls, k);
    return 0;
}

