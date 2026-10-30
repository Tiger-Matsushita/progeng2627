#include <iostream>
#include <vector>
using namespace std;

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for(int i = 0; i < vin.size(); i++) {
        if(vin[i] < t) vout.push_back(vin[i]);
    }
}

int main() {
    vector<double> v1, v2;
    int size;
    cin >> size;
    int input;
    for(int i = 0; i < size; i++) {
        cin >> input;
        v1.push_back(input);
    }
    int t;
    cin >> t;

    filter_v(v1, t, v2);
    
    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << ' ';
    }
    cout << endl;

    return 0;
}