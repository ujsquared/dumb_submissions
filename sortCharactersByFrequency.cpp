
/* sol by: uj
*  time : Sun Aug  3 11:39:36 AM IST 2025
*  rating :
*  problemNum : sortCharactersByFrequency 
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

    string s  = "tree";
    map<char, int> mp = {{'t', 1}, {'r', 1}, {'e', 2}};

    // Step 1: Copy map entries into a vector of pairs
    vector<pair<char, int>> v(mp.begin(), mp.end());

    // Step 2: Sort the vector by value
    sort(v.begin(), v.end(), [](const auto &a, const auto &b ){ 
        return a.second < b.second;
    });
    reverse(v.begin(), v.end());

    // Step 3: Print sorted by value
    for(const auto &it : v){
        for(int i = 0; i < it.second; i++) cout << it.first;
    }
    return 0;
}

