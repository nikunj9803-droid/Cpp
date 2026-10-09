//function template code
#include<iostream>
using namespace std;
template<class T>
void func(T n,T p){
  cout<<"welcome to template "<<endl;
       cout<<n<< p<<endl;
}
int main(){
  func(5,9);
  func('N','P');
  func(45.5, 78.9);
  return 0;
}