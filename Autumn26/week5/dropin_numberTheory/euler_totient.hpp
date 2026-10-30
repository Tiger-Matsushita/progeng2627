#include "gcd.hpp"
int euler_totient(int n) { //phi(n)
    int count = 0;
    for(int i = 1; i < n; i++) {
        if(gcd(n, i) == 1) count++;
    }
    return count;
}