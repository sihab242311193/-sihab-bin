
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore swapping: a = " << a << ", b = " << b;


    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
