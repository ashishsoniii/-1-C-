/*exercise on c++ inheritance

create 2 classes 
simplecalculator -- takes input of 2 no using utility fn and perform + - * / and display fn using another function
scientificcalculator -- take input of 2 number and using a uti;ity fn performs any 4 scientific operations and diplay result using othe rfn


create another class-- hybridcalculator and inherit it using thses 2 classes 
1. what type ocd ingeritance are you using?
2. which mode of inheritance are you using? 
3. create object of hybrid calculator and diplay result of calculators.
 */

#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{

protected:
    int a, b;

public:
    void setdata1(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    int sum()
    {

        return (a + b);
    }
    int subtract()
    {

        return (a - b);
    }
    int multiply()
    {

        return (a * b);
    }
    int divide()
    {

        return (a / b);
    }
};

class scientificcalculator
{

protected:
    int c, d;

public:
    void setdata2(int num3, int num4)
    {
        c = num3;
        d = num4;
    }

    int power()
    {
       
        return  pow(c, d) ;
    }
    int sumsqrt()
    {
        return sqrt(c + d);
    }
    int log()
    {

        cout <<endl<< "log10 c =  " << log10(c) <<endl<< "log10 d =  " << log10(d) << endl;

        return 0;
    }
    int sumsin()
    {
        cout << sin(c + d);
        return 0;
    }
};

class hybridcalculator : public simplecalculator, public scientificcalculator
{

public:
    void hybridcalc()
    {
        cout << "using simple calculator sum of a & b is " << sum() << endl;
        cout << "using simple calculator subtract of a & b is " << subtract() << endl;
        cout << "using simple calculator multiply of a & b is " << multiply() << endl;
        cout << "using simple calculator divide of a/b is " << divide() << endl;

         cout << "c^d is " << power() << endl;
         cout << "sum of c and d then its sqrt(a+b) = " << sumsqrt() << endl;
         cout  << log() << endl;
         cout << "sum of c and d then its sin [sin(a+b)] = " << sumsin() << endl;
    }
};

int main()
{

    hybridcalculator hc;
    hc.setdata1(10, 5);
    hc.setdata2(4, 2);
    hc.hybridcalc();
    return 0;
}