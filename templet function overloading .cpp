//template function overloading --
#include<iostream>
using namespace std ;

template<class T>
void fun(T x,T y){
cout<<"in template class:--"<<endl;
cout<<x<<endl<<y<<endl;
}

void fun(int a,int b){
cout<<"not in template class:--"<<endl;
cout<<a<<endl<<b<<endl;
}

int main(){

fun(10,20);
fun(10.1,10.1);
fun('h','q');

}

