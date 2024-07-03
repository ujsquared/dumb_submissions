#include<bits/stdc++.h>
#include <climits>
#include<iostream>
#include <ostream>
using namespace std;
int popMax(int arr[]){
    int max = INT_MIN;
    int index = 0;
    for(int i = 0; i < 12; i++){
        if(arr[i] > max){
            index = i;
            max = arr[i];
        }
    }
    arr[index] = 0;
    return max;
}
int main(){
    int k;
    cin >> k;
    int arr[12];
    for(int i = 0; i < 12; i++){
        cin >> arr[i];
    }
    int sum = 0;
    int count = 0;
    while(sum < k){
        if(count == 12){
            cout << -1;
            return 0;
        }
        sum = sum + popMax(arr);
        count++;
    }
    cout << count;
}
