#include <iostream>
using namespace std;

int multiplyIterative(int a, int b) {
    int result = 0;
    bool negative = (a < 0) != (b < 0);
    a = abs(a);
    b = abs(b);
    for (int i = 0; i < b; i++) {
        result += a;
    }
    return negative ? -result : result;
}

int multiplyRecursive(int a, int b) {
    if (b == 0) return 0;
    if (b < 0) return -multiplyRecursive(a, -b);

    return a + multiplyRecursive(a, b - 1);
}

int main() {
    int x = 6, y = 7;
    cout << "=== Multiply without * operator ===" << endl;
    cout << "Numbers: " << x << " and " << y << endl;
    cout << "---------------------------------------" << endl;
    cout << "Iterative result: " 
         << multiplyIterative(x, y) << endl;
    cout << "Recursive result: " 
         << multiplyRecursive(x, y) << endl;
    
    cout << "---------------------------------------" << endl;
    cout << "Test: 4 x -3" << endl;
    cout << "Iterative: " << multiplyIterative(4, -3) << endl;
    cout << "Recursive: " << multiplyRecursive(4, -3) << endl;
    return 0;
}
