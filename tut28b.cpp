#include <iostream>
using namespace std;

class c2;

class c1
{
    friend void exchange(c1 &, c2 &);
    int val1;

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display()
    {
        cout << val1 << endl;
    }
};
class c2
{
friend void exchange(c1 &, c2 &);
    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display()
    {
        cout << val2 << endl;
    }
};

/*  
swap trick 
void exchange (&a , &b){
temp = a;
a = b;
b = temp;  }
                */

void exchange(c1 &x, c2 &y)
{
    int tamp = x.val1;
    x.val1 = y.val2;
    y.val2 = tamp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(77);
    oc2.indata(75);
    cout << "the  value of c1 is: " ;
     oc1.display(); 
    cout << "the  value of c12 is: " ;
     oc2.display() ;

    exchange(oc1, oc2);

    cout << "the new exchanged value of c1 is: ";
    oc1.display();
    cout << "the new exchanged value of c12 is: " ;
     oc2.display();

    return 0;
}