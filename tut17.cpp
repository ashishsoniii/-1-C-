#include <iostream>
using namespace std;

inline int product (int a, int b){
    // do not use below line with inline
    static int c =0; // static fn only 1 time c=0 willl run after so on
    c=c+1;
    return a*b+c;

}


float moneyrec(int currentmoney , float factor=1.04){
return currentmoney * factor ;

}

int main (){
    int money = 100000;
    cout<<  "if you have "<<money<<"rs in your bnk acct, u will recieve "<<moneyrec(money)<<"rs after 1 yr"<<endl;
    cout<<  "for vip : if you have "<<money<<"rs in your bnk acct, u will recieve "<<moneyrec(money )<<"rs after 1 yr";
    return 0;
    
}




/*
int main()  {
     // inline function(for simple task)

    int a , b;
    cout<<"enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"the profuct of a and b is "<<product(a,b)<<endl; 
    cout<<"the profuct of a and b is "<<product(a,b)<<endl; 
    cout<<"the profuct of a and b is "<<product(a,b)<<endl; 
    cout<<"the profuct of a and b is "<<product(a,b)<<endl; 
     return 0;
}*/




