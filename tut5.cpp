#include <iostream>

 using namespace std;

 int c = 88;

int main() {
// ******built in data types ******
    // int a, b, c;
    // cout<< "the value of a is "<< endl;
    // cin>>a;
    // cout<< "the value of b is" << endl;
    // cin>>b;

    // c = a+b;
    // cout<< "the sum is:" <<c << endl;
    // cout<< "the global sum is:" <<::c;
     // Float, double and llong double literals
   float d = 34.3F;
   long double e  = 34.3L;
   cout<<"thie size of 34.4 is "<<sizeof(34.4)<<endl;
   cout<<"thie size of 34.4l is "<<sizeof(34.4l)<<endl;
   cout<<"thie size of 34.4L is "<<sizeof(34.4L)<<endl;
   cout<<"thie size of 34.4f is "<<sizeof(34.4f)<<endl;
   cout<<"thie size of 34.4F is "<<sizeof(34.4F)<<endl;
   
   // ******** reference vakiable************
    // rohan ----> montu----> rohu ----> Dangerous coder
    float m = 455;
    float &y =m;
         cout<< m<<endl;
         cout<<y<<endl;
    
      //*typecasting***
      int a = 45;
      float b = 45.56;
      cout<<"the value of a is "<<(float)a<<endl;
      cout<<"the value of a is "<<float(a)<<endl;

      cout<<"the value of b is "<<(int)b<<endl;
      cout<<"the value of b is "<<int(b)<<endl;
      
      int c = int(b);

      cout<<"the expression a+b is "<<a+b<<endl; 
      cout<<"the expression is a+c "<<a+c<<endl; 
      cout<<"the expression is a + integer part b "<<a+int(b)<<endl;
      cout<<"the expression is a + integer part b "<<a+(int)b<<endl;








     return 0;



}