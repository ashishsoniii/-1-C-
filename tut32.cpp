// constructor with default argument

#include <iostream>
using namespace std;
class simple{

  int data1 ;
  int data2 ;
  int data3 ;

 public :
  simple(int a , int b=9 , int c=5)
  {
      data1 = a ;
      data2 = b;
      data3=c;
  }
       void printdata();


};


void simple :: printdata(){
    cout<<"the value of data(1+2+3) is "<< data1<<" and " <<data2<<" aur "<<data3<<endl;
}
int main()  {
     simple s(1);
     s.printdata();
     simple s2(1,2,3);
     s2.printdata();
     return 0;
}