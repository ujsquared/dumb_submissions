
/* sol by: uj
*  time : Friday 02 August 2024 02:42:40 PM IST
*  rating :
*  problemNum : 431B 
*  tags :
*/
#include <algorithm>
#include<bits/stdc++.h>
#include <climits>
using namespace std;
typedef long long ll;

int main(){

    vector<int> v = {1,2,3,4,5};
    vector<vector<int>> result;
    ll arr[5][5];
    for(ll i = 0; i < 5; i++){
        for(ll j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    bool hasNext = true;
    while(hasNext){
        result.push_back(v);
        hasNext = next_permutation(v.begin(), v.end());
    }
    ll max = -1;
    for(ll i = 0; i < result.size(); i++){
        ll new_max = arr[result[i][0]-1][result[i][1]-1] + arr[result[i][1]-1][result[i][0]-1] + 2*(arr[result[i][2]-1][result[i][3]-1] + arr[result[i][3]-1][result[i][2]-1] + arr[result[i][3]-1][result[i][4]-1] + arr[result[i][4]-1][result[i][3]-1]) + arr[result[i][1]-1][result[i][2]-1] + arr[result[i][2]-1][result[i][1]-1];
        if (new_max  > max){
            max = new_max;
        }
    }
    // for(int i = 0; i < 5; i++){
    //     cout << result[indexMax][i] << endl;
    cout << max;
    // }
    return 0;
}
