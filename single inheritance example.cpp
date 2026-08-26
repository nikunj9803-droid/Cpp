//single inheritance example

#include<iostream>
using namespace std;
class base_class{
    public:void display(){
        cout<<"hello base class "<<endl;
        
    
    
    
    }
    


};
class des_class: public base_class{
         public:void show(){
         cout<<"hello des_class"<<endl;
         
         
         }
    
    
    
    };

int main()

{
    des_class obj;
    obj.display();
    
    obj.show();
    return 0;
}