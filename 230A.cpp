#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
bool compareVectors(const vector<int>& v1, const vector<int>& v2){
    return v1[0] < v2[0];
}
int main(){
    int s, n; cin >> s >> n;
    vector<vector<int>> v;
    while(n--){
        int x,y; cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), compareVectors);
    for(int i = 0; i < v.size(); i++){
        if(s > v[i][0]){
           s += v[i][1];
        }else{
            cout << "NO";
            return 0;
        }
        //cout << "x:" << v[i][0] << " y:" << v[i][1]<< endl;
    }
    cout << "YES";
    return 0;
}

