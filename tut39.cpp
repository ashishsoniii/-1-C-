//protected access modifier

#include <iostream>
using namespace std;

class base {
protected:  //similar to private but ccan be inherited
int a =4 ;
private:
int b ;

};
/*
for a protected membe
                             public derivation       private derivation     protected derivation
   1.Private member            Not I nherited            Not Inherited           Not inherited
   2.Protected member          protected                private                 protected
   3.Public member             public                   private                 protected
*/

class derived: public base {



};


int main()  {
     base b ;
     derived d;

   //  cout<<d.a; will not work as a is protected in both baser and derived class whether it is publically or protected declared
     return 0;
}