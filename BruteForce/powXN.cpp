#include <iostream>

using namespace std;

int main(){

    double x = 2;
    int n = 10;

    double ans = 1;

    for(int i=0; i<n; i++){
        ans = ans * x;
    }

    cout << ans;

    return 0;
}
