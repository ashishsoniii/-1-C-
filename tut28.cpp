// more on friend function

#include <iostream>
using namespace std;

class y; // in class x there is variable y present in y so we are pre declaring


class x{
    
  int data;
  public:
       void setvalue(int value){
           data = value;
       }
       friend void add (x,y);
};

class y{
    int num;
    public :
       void setvalue(int value){
           num = value;}
           friend void add(x,y);

       };

void add (x o1 , y o2){
    cout<<"summing data of x and y object gives me "<< o1.data+o2.num;
}
int main()  {
    x a ;
    a.setvalue(6);

    y b;
    b.setvalue(9);

    add(a,b);

     return 0;
}