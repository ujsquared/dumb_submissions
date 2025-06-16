
/* sol by: uj
*  time : Friday 13 December 2024 09:32:47 AM IST
*  rating :
*  problemNum : 160B 
*  tags :
*/
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    ll the_number;
    vector<ll> first_half;
    vector<ll> second_half;
    for(ll i = 0; i < n; i ++){
        char dig; cin >> dig;
        first_half.push_back((ll)dig);
    }
    for(ll i = 0; i < n; i ++){
        char dig; cin >> dig;
        second_half.push_back((ll)dig);
    }
    sort(first_half.begin(), first_half.end());
    sort(second_half.begin(), second_half.end());

    vector<ll> a,b;
    if(first_half[n-1] > second_half[n-1]) {
        a=first_half;
        b=second_half;
    }
    else if(first_half[n-1] < second_half [n-1]) {
        a=second_half; 
        b=first_half; 
    }
    else{
        cout << "NO" << endl;
        return 0;
    }
        
    // trying for smaller unluckiness
    bool unlucky = true;
    for(ll i = 0; i < n; i++){
        if(a[i] > b[i]){
            continue;
        }
        else{
            unlucky = false;
        }
    }
    if(unlucky){
        cout << "YES";
        return 0;
    }
    else{
        cout << "NO";
        return 0;
    }

    return 0;
}

