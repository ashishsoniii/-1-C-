#include <iostream>
using namespace std;

int sum(int a,int  b){
      int c =a+b ;
      return c;
}
//this will not swap and b
void  swap ( int a, int b ){ // temp a b
    int temp =a ;            // 4    4 5
    a = b;                   // 4    5 5
    b= temp;                 // 4    5 4
}

//this will swap {call by reference by pointer}
void  swappointer ( int* a, int* b ){ // temp a b
    int temp = *a ;            // 4    4 5
    *a = *b;                   // 4    5 5
    *b= temp;                 // 4    5 4
}





int main()  {
    int a =4 , b=5;
    cout <<"the sumof 4 and5 is " <<sum(4,5)<<endl;
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    //swap(a,b); // this will not swap
    swappointer(&a, &b);// this will swap
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
     
     
     return 0;
}