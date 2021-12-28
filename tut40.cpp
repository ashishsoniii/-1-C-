/* 
 multlevel inheritance

  A(grandfather) ---> B(father) ---> C (child) 
*/

#include <iostream>
using namespace std;

class student{
    protected:
      int rollnumber;
    public:
      void setrollnumber(int);
      void getrollnumber();
       
};

void student :: setrollnumber(int r ){
  rollnumber = r;

}

void student :: getrollnumber(){
    cout<<"Roll number of student is "<<rollnumber<<endl;
}

class exam: public student {
 
 protected :
  float maths;
  float physics;
  public:
   void setmarks(float , float);
   void getmarks();
  

};

void exam :: setmarks(float x, float y){
    maths = x;
    physics = y;
}
void exam :: getmarks()
{
    cout<<"the marks obtain in maths are : "<< maths <<endl;
    cout<<"the marks obtain in physics are : "<< physics <<endl;
}


class result  : public exam{
 
 float percentage;
 public:
 void display(){
     getrollnumber();
     getmarks();
     cout<<" obtain percentag is "<< ( maths+physics )/2 <<"%"<<endl;
 }



};


int main()  {
     /*
   notes:
       If we are inheriting B from A and C from B:[A--> B-->C]
          1. A is base class for B and B is the base class for C
          2. ABC is called Inheritance path  

     */


     result bhai;
     bhai.setrollnumber(33);
     bhai.setmarks(99.99 , 99.00);
     bhai.display();

     return 0;
}



