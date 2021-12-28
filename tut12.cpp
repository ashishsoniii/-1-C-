//pointers in c++

#include <iostream>
using namespace std;

int main()  {
     //pointers: data type which holds address of data types

     int a=3;
     int* b = &a;
     // & ---> (address of) operator
     cout<<"the address of a is "<<&a<<endl;
     cout<<"the address of a is "<<b<<endl;
     
     
     // * ---> (value at) dereference operator 
     cout<<"the value address at b is "<<*b<<endl;
     
     //pointers to pointers

     int** c= &b;
    cout<< "the address of b is "<<&b<<endl;
    cout<< "the address of b is "<<c<<endl;
    cout<< "the value at address c is "<<*c<<endl;
    cout<< "the value at address value_at(value_at(c)) is "<<**c<<endl;


     return 0;
}