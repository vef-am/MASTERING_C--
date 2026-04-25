#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

    float num1 = 4.1;
    int num2 = num1;

    cout << typeid(num1).name() << endl;
    cout << typeid(num2).name() << endl;

    cout << typeid(num1).name() << ": " << num1 << endl << typeid(num2).name() << ": " << num2 << endl;
}