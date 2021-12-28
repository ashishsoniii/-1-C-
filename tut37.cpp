// inheritance syntax & visibility

#include <iostream>
using namespace std;
//base class
class employee
{

public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.00;
    }
    employee() {} //required for employee class
};

/*
       Derived class syntax 
 
 class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}    {{ means to be edited}}
{
       class members/methods/etc........
}

Note
1. Default visibility mode is Private
2. Public visibility mode : public members of the base class becomes public members of the derived class
3. Private visibility mode : public members of the base class becomes private members of the derived class
4. private members of class can't be INHERITED
                                
*/

//creating a programmer class derived from employee base class

class programmer :  employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{
    employee harry(1), sohan(2);
    cout << harry.salary << endl;
    cout << sohan.salary << endl;

    programmer skillf(10);
    cout << skillf.languagecode << endl;
    skillf.getdata();
  
//   cout<< skillf.id<<endl; will not run as id in base class is public but in derived class it becomes private as no visibility code printed


    return 0;
}