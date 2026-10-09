//class_tem.cpp
#include<iostream>
using namespace std;

template<class T>
class A {
public:
    T multiple1;
    T multiple2;

    void show(T a, T b) {
        multiple1 = a;
        multiple2 = b;
        cout << "multiplication of multiple1 and multiple2 is = "
             << multiple1 * multiple2 << endl;
    }
};

int main() {
    A<int> s;
    s.show(45, 45);

    A<float> f;
    f.show(2.5f, 4.0f);

    return 0;
}