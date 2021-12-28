#include <iostream>
using namespace std;

//Recursion
/*
int factorial(int n) {
    if (n<=1) {
        return 1;
    }
    return n* factorial (n-1);
}
int main()  {
    int a ;
    cout << "enter a number "<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is"<<factorial(a); 
     // factorial of no.
     // 6!= 6*5*4*3*2*1 =720
     // 0! =1
     // 1! = 1
     //n! = n*(n-1)!
     return 0;         
}*/

int febo( int n ) {
    
    if (n<2){
        return 1;
    }
    return n = febo(n-1)+febo(n-2) ;
}

int main(){ 
    int a;
    cout<< "enter a term youou need in febonacchi ser"<<endl;
    cin >>a;
    cout<<"the term in febonacci sequence at position "<<a<<" is " << febo(a)<<endl;
return 0;
}