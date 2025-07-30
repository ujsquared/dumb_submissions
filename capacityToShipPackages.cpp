/* sol by: uj
*  time : Sun Jul 20 02:30:37 AM IST 2025
*  rating :
*  problemNum : capacityToShipPackages 
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
bool canBeShipped(vector<int>& arr, int days, int capacity){
    int i = 0;
    int daysTaken = 0;
    while(i < arr.size()){
        int todayCapacity = capacity;
        int j = i;
        while(todayCapacity >= arr[j]){
            todayCapacity -= arr[j];
            i++; j++;
        }
        daysTaken++;
    }
    return daysTaken <= days;
}
int shipWithinDays(vector<int>& weights, int days) {
   // capacity must start with max_element what say  
   // and high must be accumulate what say
   int low = *std::max_element(weights.begin(), weights.end());
   int high = 0;
   for(int z = 0; z < weights.size(); z++) high += weights[z];
   int ans = high;
   while(low<=high){
       int mid = (low+high)/2;
       bool result = canBeShipped(weights, days, mid);
       if(result){
           ans = mid;
           high = mid-1;
       }
       else low = mid+1;
   }
   return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {10,50,100,100,50,100,100,100};
    int days = 5;
    cout << shipWithinDays(arr, days);
    return 0;
}

