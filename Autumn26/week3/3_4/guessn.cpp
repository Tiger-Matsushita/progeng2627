#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int l, r;
    string s;

    cout << "Enter a lower bound:" << endl;
    cin >> l;
    cout << "Enter a higher bound:" << endl;
    cin >> r;

    int mid;
    while(l < r) {
        mid = (l+r)/2;

        cout << "Is your number " << mid << '?' << endl;
        cin >> s;

        if(tolower(s[0]) == 'y') {
            r = mid;
            break;
        }

        cout << "Higher or lower?" << endl;

        bool valid = false;
        while(!valid) {
            cin >> s;

            if(tolower(s[0]) == 'h') {
                l = mid + 1;
                valid = true;
            }
            else if(tolower(s[0]) == 'l') {
                r = mid - 1;
                valid = true;
            }
            else {
                cout << "Please provide a valid input.\nHigher or lower?" << endl;
            }
        }
    }

    cout << "Your number is " << r << '!' << endl;

    return 0;
}