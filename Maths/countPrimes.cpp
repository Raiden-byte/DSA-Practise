#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {

    if(n <= 2) {
        return 0;
    }

    vector<bool> prime(n, true);

    prime[0] = prime[1] = false;

    // Mark multiples of 2 as non-prime
    for(int i = 4; i < n; i += 2) {
        prime[i] = false;
    }

    // Check only odd numbers
    for(int i = 3; 1LL * i * i < n; i += 2) {

        if(prime[i]) {

            // Mark odd multiples of i
            for(long long j = 1LL * i * i; j < n; j += 2LL * i) {
                prime[j] = false;
            }
        }
    }

    // Count prime numbers
    int count = 0;

    for(int i = 2; i < n; i++) {
        if(prime[i]) {
            count++;
        }
    }

    return count;
}

int main() {

    int n;

    cout << "Enter n: ";
    cin >> n;

    int result = countPrimes(n);

    cout << "Number of prime numbers less than "
         << n << " = " << result << endl;

    return 0;
}
