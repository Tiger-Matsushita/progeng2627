#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r1, r2, c1, c2;
    cout << "Enter the source coordinates:" << endl;
    cin >> r1 >> c1;
    cout << "Enter the coordinates of the destination:" << endl;
    cin >> r2 >> c2;

    if(r2 >= 1 && r2 <= 8 && c2 >= 1 && c2 <= 8 && r1 >= 1 && r1 <= 8 && c1 >= 1 && c1 <= 8) {
        if((abs(r1 - r2) == 2 && abs(c1 - c2) == 1) || (abs(r1 - r2) == 1 && abs(c1 - c2) == 2)) {
            cout << "Valid" << endl;
        }
        else cout << "Invalid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}