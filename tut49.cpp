//initialisation list in constructors 

#include <iostream>
using namespace std;
/*
systax for initialisation list in constructor:
constructor(argument-list) : initilization-section
{
    assignment + cother code;
}
 
 class test{
     int a,b;
     public: 
     test(int i , int j): a(i) , b(j){constructor body}
 };

*/


class test{
     int a,b;
     public: 
  //   test(int i , int j): a(i) , b(j+i)       // will run
  //   test(int i , int j): a(i) , b(j)         // will run
  //   test(int i , int j): a(i) , b(2* j)      // will run
  //   test(int i , int j): a(i) , b(a + j)     // will run
  //   test(int i , int j): b(j) , a(i+b)       // will give garbage value of a as a is declared first in private section so when it execute b is not executed if int b is written up than a in private section then will run
  //   test(int i , int j): a(b+j) , b(a + i)   // will give garbage value
       
     
     { 
         cout<<"constructor executed with initialization list"<<endl;
         cout <<"the value of a is "<<a<<endl;
         cout <<"the value of b is "<<b<<endl;
     }
 };
int main()  {
     test t(5,6 );
     
     return 0;
}
