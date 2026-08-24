// (1)binary operator overloading :-
// (2)binary operator overloading with friend:- :-



#include<iostream>
using namespace std ;

class demo{

int a;
public: demo(){
}

demo(int x){
a=x;
}

demo operator +(demo d){
return (a-d.a);
}

void show(){
cout << "a="<<a;
}

};



int main(){

demo a(56);
demo b(78);
demo c;
c=a+b;

c.show();

}




