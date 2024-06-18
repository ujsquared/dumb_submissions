#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    int minDiff = INT_MAX;
    int aage,peeche;
    for(int i = 0; i<n; i++){
        if(i == n-1){
            if(abs(arr[n-1] - arr[0]) < minDiff){
                aage = 1;
                peeche = n;
                minDiff = abs(arr[n-1] - arr[0]);
            }
        }
        else{
            if(abs(arr[i] - arr[i+1]) < minDiff){
                aage = i+2;
                peeche = i+1;
                minDiff = abs(arr[i] - arr[i+1]);
            }

        }
    }
    cout << peeche << " " << aage;
}