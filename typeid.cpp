// RTTI typeid operators

#include <iostream>
#include <typeinfo>
using namespace std;

class parent
{
public:
    virtual void display()
    {
    }
};

class child : public parent
{
};

int main()
{
    child *ptr = new child;
    parent *p = ptr;

    cout << typeid(*p).name() << endl;
    cout << typeid(p).name() << endl;
    cout << typeid(*ptr).name() << endl;
    cout << typeid(ptr).name() << endl;

    return 0;
}