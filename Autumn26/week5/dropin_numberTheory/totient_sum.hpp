#include "euler_totient.hpp"
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