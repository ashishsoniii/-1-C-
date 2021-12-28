//copy constructor

#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    } // nesserary to run default constructor
    
    number(int num)
    {
        a = num;
    }
    // when no copy constructor is found , compiler supplies its own copy constructor
    number(number &obj)
    {
        cout <<"copy constructor called!!!!"<<endl<<endl;
        a = obj.a;
    }
    
    

    void display()
    {
        cout << "the number for this obj is  " << a << endl;
    }
};

int main()
{
    number x, y, z(77), z2 ;

    x.display();
    y.display();
    z.display();
    number z1(x); // copy constructor invoked 
    z1.display();


    //  z1 should exactly resemble z ir x ir y

    z2 =z;//copy constructtor not called;
    z2.display();

    number z3 =z;  //copy constructtor invoked;

    z3.display();
    return 0;
}