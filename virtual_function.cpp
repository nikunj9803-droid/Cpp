//virtual_function
#include<iostream>
using namespace std;
class base_class{
    public:virtual int addition()=0;

};
class derived_class:public base_class{
    public:int a=44;
    public:int b=88;
    public:int addition(){
        cout<<"addition="<<a+b;
    }
};
int main(){
    derived_class d;
    d.addition();
    return 0;
}