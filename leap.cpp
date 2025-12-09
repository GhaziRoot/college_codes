#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if (year < 1582) {
        cout << "Not within the Gregorian calendar period";
    } 
    else {
        if (year % 4 != 0) {
            cout << "Common year";
        }
        else if (year % 100 != 0) {
            cout << "Leap year";
        }
        else if (year % 400 != 0) {
            cout << "Common year";
        }
        else {
            cout << "Leap year";
        }
    }

    return 0;
}
