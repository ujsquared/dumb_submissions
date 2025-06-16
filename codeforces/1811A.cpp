#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	cout << endl;
	string arr[t];
	for(int i = 1; i <= t; i++){
		int n;
		char d;
		cin >> n >> d;
		string num;
		cin >> num;
		for(int j = 0; j < n; j++){
			if (j == n-1 && num[j] >= d){
				arr[i-1] = num + d;
			}
			else if(num[j] < d){
				arr[i-1] = num.substr(0,j) + d + num.substr(j,n - j +1);
				break;
		}
	}}
	for(int i = 0; i < t ; i++){
		cout << arr[i] << endl;
	}	

	
}
