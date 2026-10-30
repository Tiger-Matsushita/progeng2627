#include <iostream>
#include <vector>
using namespace std;

int search_vector(int n, const std::vector<int>& vin) {
    for(int i = 0; i < int(vin.size()); i++) {
        if(vin[i] == n) return i;
    }

    return -1;
}

int main() {
    vector<int> v;
    int size;
    cin >> size;
    int input;
    for(int i = 0; i < size; i++) {
        cin >> input;
        v.push_back(input);
    }

    int n;
    cin >> n;

    cout << search_vector(n, v) << endl;

    return 0;
}