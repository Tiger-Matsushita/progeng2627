#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter the three sides:" << endl;
    cin >> a >> b >> c;
    int p = 0;

    if(a + b > c && a + c > b && b + c > a) {
        if(a == b && b == c) cout << "Equilateral" << endl;
        else if(a == b || b == c || a == c) cout << "Isoceles" << endl;
        else cout << "Scalene" << endl;
        p = a + b + c;
        cout << "Perimeter: " << p << endl;
        int s = p/2;
        cout << "Area: " <<sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
    } else {
        cout << "Invalid triangle." << endl;
    }

    return 0;
}