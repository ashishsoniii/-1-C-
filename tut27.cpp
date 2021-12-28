// friend classes & member friend functions

#include <iostream>
using namespace std;

class complex
{
    int a, b;

    friend class calculator; // we made class calculator friens so can accesss our data if we have to give accesss of private data to only one function then seeee tut27b.cpp

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

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex o1, complex o2)
    {
        return (o1.a + o2.a);
    }

    int sumimaginarycomplex(complex o1, complex o2){
        return (o1.b + o2.b);
    }
};

int main()
{

    complex o1, o2;
    o1.setnumber(1, 4);
    o1.printnumber();
    
    o2.setnumber(5, 7);
    o2.printnumber();


    calculator calc;
    int sumreal = calc.sumrealcomplex(o1, o2);

    cout << "the sum of real part of o1 and o2 is " << sumreal << endl;
    
    int sumimaginary = calc.sumimaginarycomplex(o1, o2);

    cout << "the sum of real part of o1 and o2 is " << sumimaginary << endl;
    return 0;
}