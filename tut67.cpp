// c++ function template & function template with parameter

#include <iostream>
using namespace std;

// float funcaverage(int a , int b){

//     float avg = (a+b)/2;
//     cout<<avg;
//     return avg;

//   }

//variable swap

template <class t>
void swapi (t &a , t &b){
    t temp = a ;
    a = b;
    b= temp;
}

template <class t1, class t2>

float funcaverage(t1 a , t2 b){

    float avg = (a+b)/2;
    
    return avg;

}
int main()  {
     
     float c = funcaverage(7,4.0);
     cout<<"\n avg is---> "<<c<<endl;

int x = 5 , y = 7;
swapi(x,y);
cout<<x<<y;
     return 0;
}