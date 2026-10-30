#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, curmax = INT_MIN, curmin = INT_MAX;
    
    while(n != 0) {
        cout << "Enter 0 to exit\nPlease enter a number:" << endl;
        cin >> n;

        if(n > curmax) {
            curmax = n;
        }
        if(n < curmin) {
            curmin = n;
        }

        cout << "Current maximum is " << curmax << endl << "Current minimum is " << curmin << endl;
    }

    return 0;
}