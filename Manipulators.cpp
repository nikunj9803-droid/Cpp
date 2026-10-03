#include<iomanip> 
#include<iostream> 
using namespace std; 
int main() 
{ 
cout<< setw(10) << 1 << endl; 
cout<< setw(10) << 10 << endl; 
cout<< setw(10) << setfill('*')<< 100 << endl; 
cout<< setprecision(4) << 22/7.0 << endl; 
cout<< setw(5) << setiosflags(ios::left)<<"Hello"<< endl; 
cout<< setw(20) << resetiosflags(ios::right)<<"Hello"<< endl;
}