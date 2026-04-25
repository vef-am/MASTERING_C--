#include <iostream>
using namespace std;

int main()
{
    // Arithmatic Operators
    int x = 30, y = 10;

    int sum = x + y;     // sum = 40
    int sub = x - y;     // sub = 20
    int product = x * y; // product = 300
    int div = x / y;     // div = 3
    int rem = x % y;     // rem = 0

    cout << "Sum: " << sum << endl
         << "Subtraction: " << sub << endl
         << "Product: " << product << endl
         << "Division: " << div << endl
         << "Rest: " << rem << endl;

    // Assignment Operators
    x += 1; // 31
    cout << x << endl;
    x -= 15; // 16
    cout << x << endl;
    x *= 2; // 32
    cout << x << endl;
    x /= 5; // 6
    cout << x << endl;

    // Comparison Operators
    bool eq = x == y;   // False
    bool neq = x != y;  // True
    bool lt = x < y;    // True
    bool gt = x > y;    // False
    bool lteq = x <= y; // True
    bool gteq = x >= y; // False

    cout << "Equal: " << eq << endl
         << "Not equal: " << neq << endl
         << "Lower than: " << lt << endl
         << "Greater than: " << gt << endl
         << "Lower than equal: " << lteq << endl
         << "Greater than equal: " << gteq << endl;

    // Logical Operators
    bool a = true, b = false, c = false;

    bool andResult = a && b;          // False
    bool orResult = a || b;           // True
    bool notResult = !a;              // False
    bool andNotResult = (!b) && (!c); // True

    cout << "And result: " << andResult << endl
         << "Or result: " << orResult << endl
         << "Not result: " << notResult << endl
         << "And (not) result: " << andNotResult << endl;
}