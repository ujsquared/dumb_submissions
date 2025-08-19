
/* sol by: uj
*  time : Mon Aug 18 09:18:49 PM IST 2025
*  rating :
*  problemNum : mColorProblem 
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

bool checkColorNode(int node, int clrcode, vector<vector<int>>& edges, map<int, int>& state){
    for(int i = 0; i < edges.size(); i++){
        if(edges[i][0] == node || edges[i][1] == node){
            if(edges[i][0] == node){
                if(clrcode == state[edges[i][1]]) return false;
            }
            else{
                if(clrcode == state[edges[i][0]]) return false;
            }
        }
    }
    return true;
}

bool backtrack(int nodeIndex, int& m, vector<vector<int>>& edges, int& v, map<int, int>& state, bool& result){
    if(nodeIndex >= v){
        return true;
    }
    for(int i = 0; i < m; i++){
        if(checkColorNode(nodeIndex, i, edges, state)){
            int original = state[nodeIndex];
            state[nodeIndex] = i;
            result = result || backtrack(nodeIndex+1, m, edges, v, state, result);
            state[nodeIndex] = original;
        }
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // int v = 4; vector<vector<int>> edges = {{0, 1}, {1, 3}, {2, 3}, {3, 0}, {0, 2}};int m = 3;
    int v = 3; vector<vector<int>> edges= {{0, 1}, {1, 2}, {0, 2}}; int m = 2;
    map<int, int> state;
    for(int i = 0; i < v; i++){
        state[i] = -1;
    }
    bool finalRes = false;
    cout << backtrack(0, m, edges, v, state, finalRes);
    return 0;
}

