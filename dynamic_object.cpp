// Dynamic Initialization of Object

#include <iostream>
using namespace std;

class Dynamic_object
{
public:
    Dynamic_object() {}

public:
    Dynamic_object(int x)
    {
        p = x;
        cout << "p = " << p << endl;
    }

    int p;
};

int main()
{
    Dynamic_object o;
    int data;

    cout << "Enter object data";
    cin >> data;

    o = Dynamic_object(data);

    return 0;
}