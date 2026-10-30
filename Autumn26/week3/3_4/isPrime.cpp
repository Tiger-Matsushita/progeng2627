#include <iostream>
using namespace std;

int factors[10000] = {0};

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a number: " << endl;
    cin >> n;

    int j = 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            isPrime = false;
            factors[j] = i;
            j++;
        }
    }

    if(isPrime) {
        cout << n << " is a prime number!" << endl;
    }
    else {
        cout << n << " is not a prime number! Its factors are 1, ";

        for(int i = j - 1; i >= 0; i--) {
            if(factors[i] * factors[i] == n) continue;
            factors[j] = n / factors[i];
            j++;
        }

        for(int i = 0; i < j; i++) {
            cout << factors[i] << ", ";
        }
        cout << "and " << n << endl;
    }

    return 0;
}