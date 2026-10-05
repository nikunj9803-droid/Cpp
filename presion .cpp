#include <iostream>
using namespace std;

int main()
{
cout << "Default: " << endl;
cout << 123 << endl;
cout << "width(5):" << endl;
cout.width(5);
cout << 123 << endl;
cout << "width(5) and fill('*'):" << endl;
cout.width(5);
cout.fill('*');
cout << 123 << endl;
cout.precision(4);
cout << "precision(6) ---> " <<
1.1234567 << endl;
cout << "precision(5) ---> " <<
9.1234567 << endl;
cout << "setf(showpos): " << endl;
cout.setf(ios::showpos);
cout << -123 << endl;
cout << "unsetf(showpos): " << endl;
cout.unsetf(ios::showpos);
cout << 123 << endl;
return 0;
}