#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, m; cin >> n >> m;
    vector<int> v1;
    int c = m;
    while(c--){
       int a;cin >> a;
       v1.push_back(a);
    }
    sort(v1.begin(), v1.end());
    vector<int> v2 = v1;
    int maxCost = 0;
    int maxPass = 0;
    int minPass = 0;
    int minCost = 0;
    int i = 0;
    while(i < n){
        maxCost += v1[m-1];
        v1[m-1]--;
        i++;
        sort(v1.begin(), v1.end());
    }
    i = 0;
    for(int z = 0; z<m; z++){
        for(int y = v2[z]; y > 0 && i < n; y--){
            minCost += y;
            i++;
        }
    }
    cout << maxCost << " " << minCost;
    return 0;
}
