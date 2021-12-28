// constructors in c++


#include <iostream>
using namespace std;

class complex{
     int a,b;
     public:
//creating a constructor 
// constructor is a specila memeber function with the same name as class.
// It is automaticallly invoked whenever object is created
//  it is used to initialeze the object of its class
//basically we set value not useing different function
 
 complex (void); //constructor decleration

 void printnumber(){
     cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;

 }

};

complex :: complex(){     //--> this is default constructor as it takes no parameter
    a=10;
    b=20;
}
int main()  {
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
     
     return 0;
}

/*properties of constructor

1. It should be declare in the public section of the classes
2. They are automically invoked whenever the object is created.(means automatically run no need to give command)
3. They cannot return values and do not have return types
4. It can have default argument
5. We cannot refer to the addres

*/