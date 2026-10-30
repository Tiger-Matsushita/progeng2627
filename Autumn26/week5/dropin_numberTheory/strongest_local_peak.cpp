#include <iostream>
#include <vector>
#include "totient_sum.hpp"
using namespace std;

struct Peak {
    double strength;
    int n;
};

vector<Peak> local_peak; //local totient-depth peak
int results[3] = {0};

int strongest_local_peak(int a, int b) {
    int depth, dummy;
    vector<double> depths;
    for(int i = a; i <= b; i++) {
        depth = 0;
        dummy = totient_sum(i, depth);
        depths.push_back(double(depth));
    }

    /*for(int i = 0; i < depths.size(); i++) {
        cout << depths[i] << ' ';
    }
    cout << endl;*/

    double str;
    for(int i = a+1; i <= b-1; i++) {
        int j = i - a;
        if(depths[j] > depths[j - 1] && depths[j] > depths[j + 1]) {
            str = (depths[j] - depths[j-1] + depths[j] - depths[j+1]) / 2;
            local_peak.push_back({str, i});
        }
    }

    /*for(int i = 0; i < local_peak.size(); i++) {
        cout << local_peak[i].strength << ' ' << local_peak[i].n << endl;
    }
    cout << endl;*/

    int slp = -1;
    double slp_value = 0;
    for(int i = 0; i < local_peak.size(); i++) {
        if(local_peak[i].strength > slp_value) {
            //cout << local_peak[i].n << endl;
            slp = local_peak[i].n;
            slp_value = local_peak[i].strength;
            results[0] = depths[local_peak[i].n - a];
            results[1] = depths[local_peak[i].n - a - 1];
            results[2] = depths[local_peak[i].n - a + 1];
        }
    }

    return slp;
}

int main() {
    int a, b;
    cin >> a >> b;
    int slp = strongest_local_peak(a, b);

    cout << endl;

    cout << slp << endl;
    for(int i = 0; i < 3; i++) {
        cout << results[i] << ' ';
    }
    cout << endl;

    return 0;
}