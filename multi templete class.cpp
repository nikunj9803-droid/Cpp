//multiple template class :-

#include<iostream>
using namespace std ;

template<class H,class Q,class P>
void fun(H x,H w,P y,Q z){

cout<<"multiple template class code:"<<endl;
cout <<x<< endl<<w<<endl<<y<<endl<<z<<endl;

}

int main(){

fun(10,20,50.5,'H');

}




