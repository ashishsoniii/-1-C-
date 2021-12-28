// parametrized and default constructors

#include <iostream>
using namespace std;

class complex{
 int a,b;

 public:
 complex (int , int ) ;
  
  void printnumber()
  {
      cout<<"your number is "<<a<<"+"<<b<<" i"<<endl;

  }


};

complex :: complex(int x ,int y)  // this is a parameterized constuctor a sit takes 2  parameter
{
    a=x;
    b=y;


}

int main()  {
    // implicit call
     complex a(4,6);
    a.printnumber();
     // explicit call
     complex b = complex (5, 7);
     b.printnumber();

     return 0;
}