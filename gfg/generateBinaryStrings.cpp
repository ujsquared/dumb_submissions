
/* sol by: uj
*  time : Thu Aug 14 05:27:51 AM IST 2025
*  rating :
*  problemNum : generateBinaryStrings 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<string>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void stringRecursive(vector<string>& ans, int i, string& s){
    if(i >= s.length()){
        ans.push_back(s);
        return;
    }

    stringRecursive(ans, i+1, s);

    s[i] = '1';

    stringRecursive(ans, i+2, s);

    s[i] = '0';
}

vector<string> generateBinaryStrings(int n){
    string s(n, '0');

    vector<string> result;

    stringRecursive(result, 0, s);
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 3;
    vector<string> v = (generateBinaryStrings(n));
    printVector(v);
    return 0;
}

