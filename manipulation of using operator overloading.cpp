// Manipulation of String using Operator Overloading

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class String_manip
{
    char s1[20], s2[20];

public:
    String_manip()
    {
    }

    String_manip(char x[], char y[])
    {
        strcpy(s1, x);
        strcpy(s2, y);
    }

    void show()
    {
        cout << "Concatenation = " << s1 << s2 << endl;
    }

    void operator +()
    {
        strcat(s1, s2);
    }
};

int main()
{
    String_manip ob1("Good", "Morning");

    +ob1;

    ob1.show();

    return 0;
}