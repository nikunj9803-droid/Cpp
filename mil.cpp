#include <iostream>
using namespace std;

class mil
{
public:
    int a, b;

public:
    mil(int x, int y)
    {
        a = x;
        b = y;
    }

public:
    void show()
    {
        cout << "mil-A = " << a << endl;
        cout << "mil-B = " << b << endl;
    }
};

int main()
{
    mil m(50, 60);
    m.show();

    return 0;
}