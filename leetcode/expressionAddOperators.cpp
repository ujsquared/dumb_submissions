
/* sol by: uj
*  time : Tue Aug 19 04:04:42 AM IST 2025
*  rating :
*  problemNum : expressionAddOperators 
*  tags :
*/
#include<bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void backtrack(int index, vector<string>& result, string& num, int& target, int currentValue, int lastNumber, string path){
    if(index >= num.size()){
        if(currentValue == target){
            result.push_back(path);
        }
        return;
    }


    for(int i = index; i < num.size(); i++){
        string currentSubstr = num.substr(index, i-index+1);

        if(currentSubstr.size() >1 && currentSubstr[0] == '0'){
            break;
        }

        ll currentNum = stoll(currentSubstr);

        if(index == 0){
            backtrack(i+1, result, num, target, currentValue, lastNumber, path);
        }
        else{
            backtrack(i+1, result, num, target, currentValue+currentNum, lastNumber, path+ "+" +currentSubstr);

            backtrack(i+1, result, num, target, currentValue-currentNum, lastNumber, path+ "-" +currentSubstr);
            
            backtrack(i+1, result, num, target, (currentValue-lastNumber)*(lastNumber*currentNum), lastNumber, path+ "*" +currentSubstr);
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string num = "123"; int target = 6;
    vector<string> result;
    return 0;
}

