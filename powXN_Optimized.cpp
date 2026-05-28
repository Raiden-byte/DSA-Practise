#include <iostream>

using namespace std;

double solve(double x, long long n){

    if(n == 0){
        return 1;
    }

    double half = solve(x, n/2);

    if(n % 2 == 0){
        return half * half;
    }
    else{
        return x * half * half;
    }

}

int main(){

    double x = 2;
    int n = 10;

    long long power = n;

    if(power < 0){
        x = 1 / x;
        power = -power;
    }

    cout << solve(x, power);

    return 0;
}
