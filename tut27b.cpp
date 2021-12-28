
#include <iostream>
using namespace std;

//forward declaration
class complex;


class calculator{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex , complex ) ;
    int sumimaginarycomplex(complex , complex ) ;
};



class complex
{
    int a, b;
 //individually declaration of friend
    friend int  calculator:: sumrealcomplex(complex o1 , complex o2);  // we give access pf private data to only sumrealcomplex function present in calculator class
    friend int  calculator:: sumimaginarycomplex(complex o1 , complex o2);  // we give access pf private data to only sumrealcomplex function present in calculator class

// now if we have to make 100 function and access priavte data then we have toh add all and then give forward decleration so 
// this become so untire sowe make full class friend by ---->> friend class classname;


public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {

        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

int calculator :: sumrealcomplex(complex o1, complex o2)
    {
        return (o1.a + o2.a);
    }
int calculator :: sumimaginarycomplex(complex o1, complex o2)
    {
        return (o1.b + o2.b);
    }



int main()
{

    complex o1, o2;
    o1.setnumber(1, 4);
    o1.printnumber();
    o2.setnumber(5, 7);
    o2.printnumber();


    calculator calc;
    int result = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << result << endl;
   
    int sumimaginary = calc.sumimaginarycomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << sumimaginary << endl;
    return 0;
}