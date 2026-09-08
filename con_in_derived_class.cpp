//constructor_in_derived_class
#include<iostream>
using namespace std;
class base1{
    public:char a;
    public:base1(char x){
        cout<<"base_one"<<x<<endl;

    }
};
class base2{
    public:char b;
    public:base2(char y){
        cout<<"base_two"<<y<<endl;
    }
};
class derived1:public base1,public base2{
    public:derived1(char a,char b):base1(a),base2(b){
        cout<<"derived class="<<a<<b<<endl;
    }
};
int main(){
    derived1 d1('W','T');
    return 0;
}