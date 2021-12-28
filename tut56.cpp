//virtual function in c++


#include <iostream>
using namespace std;

class baseclass{
public:
 int varbase = 1;
 virtual void display(){      //virtual fn says that run display fn of derived class not of its own i.e. base class
     cout<<"1 displaying base class variable varbase "<<varbase<<endl;
 }

};

class derivedclass : public baseclass{
public:
 int varderived =2;
 void display(){
     cout<<"2 displaying base class variable varbase "<<varbase<<endl;
     cout<<"2 displaying derived class variable varderived "<<varderived<<endl;
 }

};


int main()  {
     
baseclass *baseclasspointer;
baseclass objbase;
derivedclass objderived;
baseclasspointer = &objderived;
baseclasspointer-> display();

     return 0;
}