#include <iostream>
using namespace std;

class Base
{
protected:
    int i;

public:
    Base() {}
    Base(int x)
    {
        i = x;
    }
};

class Derived : public Base
{
private:
    int i;

public:
    Derived(int x, int y)
    {
        i = x;
        Base::i = y;
    }

    void print()
    {
        cout << i + Base::i << endl;
    }
};

int main()
{
    Derived A(1, 100);
    A.print();
    return 0;
}