#include <iostream>

using namespace std;

class base
{
    int data1; //its private and not inheritable
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}

//class derived :  private base    both same niche wala
class derived : base //class is being derived privately
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    setdata(); //called as it is private in derived
    data3 = data2 * getdata1();
}

void derived ::display()
{
    cout << "value of data1 is " << getdata1() << endl;

    // we can't write direct data1 because it is not inherited in derived class so we have to call it by making function in public and link to data 1 and call that function
    cout << "value of data2 is " << data2 << endl;
    cout << "value of data3  is " << data3 << endl;
}

int main()
{
    derived der;

    der.process();
    der.display();

    return 0;
}