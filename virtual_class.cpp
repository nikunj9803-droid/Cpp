//virtual class
#include<iostream>
using namespace std;
class A{
    public:void display(){
        cout<<"one"<<endl;
    
    }
};
class B:virtual public A{
    public:void display1(){
        cout<<"two"<<endl;
    }


};
class C:public B,public virtual A{
    public:void display2(){
    cout<<"three"<<endl;
    }
};
int main(){
    C obj;
    obj.display();
    obj.display1();
    obj.display2();
    return 0;

}