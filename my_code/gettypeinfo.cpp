#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

int main() {

    float num1 = 4.1f;
    int num2 = static_cast<int>(num1); // explicit cast to show truncation

    cout << typeid(num1).name() << endl;
    cout << typeid(num2).name() << endl;

    cout << typeid(num1).name() << ": " << num1 << endl << typeid(num2).name() << ": " << num2 << endl;
}