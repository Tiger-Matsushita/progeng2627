#include <iostream>
#include <vector>
using namespace std;

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {
    for(int i = 0; i < vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++) {
        vout.push_back(vin2[i]);
    }
}

int main() {
    vector<int> v1, v2, v3;
    int size1, size2;
    cin >> size1;
    int input;
    for(int i = 0; i < size1; i++) {
        cin >> input;
        v1.push_back(input);
    }
    cin >> size2;
    for(int i = 0; i < size2; i++) {
        cin >> input;
        v2.push_back(input);
    }

    append_vectors(v1, v2, v3);

    for(int i = 0; i < v3.size(); i++) {
        cout << v3[i] << ' ';
    }
    cout << endl;

    return 0;
}