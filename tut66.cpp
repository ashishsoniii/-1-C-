// class templates with default parameters

#include <iostream>
using namespace std;


template<class t1= int , class t2 = float>
class soni{
public:
t1 a;
t2 b;
soni(t1 x , t2 y) {
    a = x ;
    b = y;

}
void display(){
    cout<<"the value of a is  " <<a<<endl;
    cout<<"the value of b is  " <<b<<endl;
}


};

int main()  {

    soni <>h (4, 6.6);
    h.display();     
     return 0;
}