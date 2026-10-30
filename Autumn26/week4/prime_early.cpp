#include <iostream>
using namespace std;

int smallest_factor(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    int n;

    cout << "Enter your number:" << endl;
    cin >> n;
    cout << smallest_factor(n) << endl;

    return 0;
}