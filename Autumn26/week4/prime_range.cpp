#include <iostream>
#include "prime_early.hpp"
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter the lower bound:" << endl;
    cin >> a;
    cout << "Enter the upper bound:" << endl;
    cin >> b;

    int sf;
    for(int i = a; i <= b; i++) {
        sf = smallest_factor(i);
        if(sf == 0) cout << i << endl;
    }

    return 0;
}