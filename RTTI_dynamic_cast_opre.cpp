#include<iostream>
using namespace std;
class Parent{
public:virtual void display(){
}
};
class Child:public Parent{
public:void display(){
cout<<"Hey I am child"<<endl;
}
};
int main(){
Parent*pt=new Child;
Child*c=dynamic_cast<Child*>(pt);
pt->display();
if(c!=NULL){
cout<<"working"<<endl;
}
else{
cout<<"not working"<<endl;
}
}