#include <iostream>
#include "euler_totient.hpp"
using namespace std;

int totient_sum(int n, int &depth) {
    if(n == 1) return 0;
    int phi = euler_totient(n);
    if(phi == 1) {
        depth++;
        return 1;
    }
    else {
        depth++;
        return phi + totient_sum(phi, depth);
    }
}

int main() {
    int n;
    cin >> n;
    int depth = 0;
    cout << totient_sum(n, depth) << ' ' << depth << endl;

    return 0;
}