#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int min_vector_element(const vector<double>& vin) {
    int out = -1;
    double mn = INT_MAX;
    for(int i = 0; i < int(vin.size()); i++) {
        if(vin[i] < mn) {
            mn = vin[i];
            out = i;
        }
    }

    return out;
}

int main() {
    vector<double> v;
    int size;
    cin >> size;
    int input;
    for(int i = 0; i < size; i++) {
        cin >> input;
        v.push_back(input);
    }
    cout << min_vector_element(v) << endl;

    return 0;
}