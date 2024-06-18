#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int circle = n + 1;
    int sum = 0;
    int count = 5;
    for(int i = 0; i < n; i++){
        int y;
        cin >> y;
        sum += y;
    }
    for(int z = 1; z <= 5; z++){
        if((sum + z) % circle == 1 ){
        --count;
    }
    
}
cout << count;
}