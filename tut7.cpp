#include <iostream>
using namespace std;


int d=45;                 // global variable
int c=77;                 // global variable


int main()  {
     int a , b , c, d,  e;
     

     cout<<"enter the value of a"<<endl;
     cin>>a;
     cout<<"enter the value of b"<<endl;
     cin>>b;
     cout<<"enter the value of c "<<endl;
     cin>>c;
  d=a+b+c;
  e=a+b+::c;
  cout<<"the sum of abc is "<<d<<endl;
  cout<<"the global d is " <<::d<<endl;
  cout <<"the sum of a b global c is" <<e<<endl;

float f = 34.4;
long double g =34.4;
cout<<"the value of f is "<<f<<"\n the value of g is " <<g;



     return 0;
}