//multiple Inheritance  A++B --> c

#include <iostream>
using namespace std;

/* 
  Multiple Inheritance syntax 

class derived : visbibility-mode base1 , visibility-mode base2{

};  
 */


class base1{
    protected:
    int baseint1;
    public :
    void setbase1int(int a ){
        baseint1 = a;
    }
};

class base2 {
    protected:
    int baseint2;
    public:
    void setbase2int (int b){
        baseint2 = b;
    }
};

class base3 {
    protected:
    int baseint3;
    public:
    void setbase3int (int b){
        baseint3 = b;
    }
};

class derived:public base1 , public base2 , public base3
{
 public :
 void show(){
   cout<< "the value of base1 is " << baseint1<<endl;
   cout<< "the value of base2 is " << baseint2<<endl;
   cout<< "the value of base3 is " << baseint3<<endl;
   cout<< "the sum of these value is " << baseint1 + baseint2 + baseint3 <<endl;

 }   

};


/*
The Innherited derived class will look like thi:-
data member: 
baseint1() --> protected
baseint2() --> protected
baseint3() --> protected

number function:
 setbase1int()---> public
 setbase2int()---> public
 setbase3int()---> public
 show() ---------> public
*/

int main()  {
     
 derived d ;
 d.setbase1int(55);
 d.setbase2int(15);
 d.setbase3int(11);
 d.show();

     return 0;
}