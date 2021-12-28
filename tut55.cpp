//pointers to derived class

#include <iostream>
using namespace std;

class baseclass{
public:
 int varbase;
 void display(){
     cout<<"displaying base class variable varbase "<<varbase<<endl;
 }

};

class derivedclass : public baseclass{
public:
 int varderived;
 void display(){
     cout<<"displaying base class variable varbase "<<varbase<<endl;
     cout<<"displaying derived class variable varderived "<<varderived<<endl;
 }

};

int main()  {
     baseclass * baseclasspointer;
     baseclass objbase;
     derivedclass objderived;

  baseclasspointer = &objderived; //pointing base class pointer tok derived class

baseclasspointer->varbase=34;
baseclasspointer->display();// will display of base class 
//using base class porperty we cant


baseclasspointer->varbase=3400;
baseclasspointer->display();

derivedclass * derivedclasspointer;
derivedclasspointer =&objderived;
derivedclasspointer->varderived=98;
derivedclasspointer->varbase=981;

derivedclasspointer->display();
//this is virtual/runtime ;;
     return 0;
}