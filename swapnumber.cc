#include <iostream>
using namespace std;

void case1()
{
    int a = 5, b = 10, temp;
    cout << "Before swapping." << endl;
    cout << "a = " << a << " b = " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "After swapping." << endl;
    cout << "a = " << a << " b = " << b << endl;
}

void case2()
{
    int a = 5, b = 10;
    cout << "Before swapping." << endl;
    cout << "a = " << a << " b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping." << endl;
    cout << "a = " << a << " b = " << b << endl;
}

int main()
{
    case1();
    cout << "========" << endl;
    case2();
    return 0;
}
