// Binary operators overloading

#include <iostream>
using namespace std;

class Binary_example
{
    int a;

public:
    Binary_example()
    {
    }

    Binary_example(int x)
    {
        a = x;
    }

    void show()
    {
        cout << "Addition of object = " << a << endl;
    }

    Binary_example operator +(Binary_example b)
    {
        Binary_example temp;
        temp.a = a + b.a;
        return temp;
    }
};

int main()
{
    Binary_example ob1(50);
    Binary_example ob2(80);

    ob2 = ob1 + ob2;

    ob2.show();

    return 0;
}