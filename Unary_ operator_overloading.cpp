// Unary Operator Overloading

#include <iostream>
using namespace std;

class Unary_Example
{
public:
    int a;

public:
    Unary_Example(int x)
    {
        a = x;
    }

public:
    void showdata()
    {
        cout << "Value of a = " << a << endl;
    }

    void operator-()
    {
        a = -a;
    }
};

int main()
{
    Unary_Example ex(60);

    ex.showdata();

    -ex;

    ex.showdata();

    return 0;
}