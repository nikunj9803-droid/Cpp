//multiple template in c++
#include<iostream>
using namespace std;
template<class T, class T1, class T2>
void fun(T a,T1 b,T2 c){
    cout<<"this is template ";
    cout<<a<<b<<c;
}
int main(){
 fun(23,4.5,true);

return 0;
}