#include <iostream>
using namespace std;

//function prototpe 
// type function_name (argument);
//below syntax can be use before the int main which give assurity that variable is present in code before or after main;

//int sum(int a, int b);   ---->accepetable()
//int sum(int a, b);        ---> not accepetable
// int sum(int ,int);      ----> accepetable

 //if only below syntax written  elow than code will not run as it it think sum is not define in code.
 void g();//not use this iff void functin is written before main ;
 
 
 int sum(int a , int b) {
    int c =a+b;
    return c;

}


int main()  {
    int num1 , num2;
    cout<<"enter 1st no."<<endl;
    cin>>num1;
    cout<<"enter 2nd no."<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2);
  g();
// num 1 and num2 are acctual parameter(values to pass functio)
// formal parameter (use/MADE in only function) a and b will be taking values from actuL PARAMETERs NUM 1 NUM 2


     return 0;
}

void g(){
    cout<<"\n hello'ram ram sa"; 
}