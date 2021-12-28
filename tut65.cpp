//c++ Templates with multiple parameter

#include <iostream>
using namespace std;

/*
class template with multiple paramaters (1 or 2 or more than 2 1234567)
template<class t1, class t2>
class nameofclass{

};
*/
template<class t1, class t2>
class myclass{
    
public:
t1 data1;
t2 data2;

myclass(t1 a , t2 b){
    data1 = a;
    data2 = b;
}

void display()
{
    cout<<this->data1<<endl<<this->data2<<endl<<endl ;
}


};



int main()  {
     
     myclass <int, char> obj(1, 'c');
     obj.display();
     myclass <int, float> obj1(1, 4.3);
     obj1.display();




     return 0;
}