//binary_operator_overloading
#include<iostream>
using namespace std;
class binary_example{
    public: int a;
    public:binary_example(){

    }
    public:binary_example(int x){
        a=x;

    }
    public:void show(){
        cout<<"addition of object"<<a<<endl;
    }
    binary_example operator +(binary_example o1){
        //(temp=a(data_member)+b(object as argument);
        binary_example temp;
        temp.a=a+o1.a;
        return temp;

    }
};
int main(){
    binary_example obj(67);
    binary_example obj1(90);
    binary_example obj2();
    obj2=obj+obj1;
    obj2.show();
    return 0;


}
