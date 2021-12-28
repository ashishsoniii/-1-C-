//pointer revisiting:new and del;ete keywords in cpp

#include <iostream>
using namespace std;

int main()  {
     //basic example of pointer

     int a= 4;
     int* ptr = &a;
// jaise a ki value 4 hai vaise ptr ki valur address of a hai;

// ptr address hai aur *ptr is value at that address means 4

cout<<"the value of *ptr  is "<<*ptr<<endl;
cout<<"the value of a is "<<a<<endl;
cout<<"the value of ptr is "<<ptr<<endl;
cout<<"the value of a address is "<<&a<<endl;

//new keyword
int*p = new int (40);
float *t = new float(66);
cout<<"the value at address p is "<<*p<<endl;
cout<<"the value at address t is "<<*t<<endl;

//allocating value using array
int*arr = new int[3];
arr[0] = 10;
*(arr+1) = 20;       // *(arr+1) = arr[1]
arr[2] = 30;
 //delete [] arr; //this is delete array

cout<<"the value of arr[0] is "<< arr[0]<<endl;
cout<<"the value of arr[1] is "<< arr[1]<<endl;
cout<<"the value of arr[2] is "<< arr[2]<<endl;


//delete operator







   

     return 0;
}