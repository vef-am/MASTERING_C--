#include <iostream>

int main()
{
    // Arithmatic Operators
    int x = 30, y = 10;

    int sum = x + y;     // sum = 40
    int sub = x - y;     // sub = 20
    int product = x * y; // product = 300
    int div = x / y;     // div = 3
    int rem = x % y;     // rem = 0

    std::cout << "Sum: " << sum << std::endl
              << "Subtraction: " << sub << std::endl
              << "Product: " << product << std::endl
              << "Division: " << div << std::endl
              << "Rest: " << rem << std::endl;

    // Assignment Operators
    x += 1; // 31
    std::cout << x << std::endl;
    x -= 15; // 16
    std::cout << x << std::endl;
    x *= 2; // 32
    std::cout << x << std::endl;
    x /= 5; // 6
    std::cout << x << std::endl;

    // Comparison Operators
    bool eq = x == y;   // False
    bool neq = x != y;  // True
    bool lt = x < y;    // True
    bool gt = x > y;    // False
    bool lteq = x <= y; // True
    bool gteq = x >= y; // False

    std::cout << std::boolalpha; // print booleans as true/false
    std::cout << "Equal: " << eq << std::endl
              << "Not equal: " << neq << std::endl
              << "Lower than: " << lt << std::endl
              << "Greater than: " << gt << std::endl
              << "Lower than equal: " << lteq << std::endl
              << "Greater than equal: " << gteq << std::endl;

    // Logical Operators
    bool a = true, b = false, c = false;

    bool andResult = a && b;          // False
    bool orResult = a || b;           // True
    bool notResult = !a;              // False
    bool andNotResult = (!b) && (!c); // True

    std::cout << "And result: " << andResult << std::endl
              << "Or result: " << orResult << std::endl
              << "Not result: " << notResult << std::endl
              << "And (not) result: " << andNotResult << std::endl;
}