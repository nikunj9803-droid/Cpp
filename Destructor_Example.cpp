// Destructor Example

#include <iostream>
using namespace std;

class Destructor_Example
{
public:
    int a, b;

public:
    Destructor_Example(int x, int y)
    {
        a = x;
        b = y;
        cout << "Constructor called";
    }

    public:
    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    ~Destructor_Example()
    {
        cout << "Destructor called";
    }
};

int main()
{
    Destructor_Example d(70, 80);
    d.show();

    return 0;
}