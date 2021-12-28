//Dynamicinitializationof objects using constructors]

#include <iostream>
using namespace std;

class bankdeposit{
   int principal;
   int year;
   float interestrate;
   float returnvalue;

   public: bankdeposit(){}
   bankdeposit( int p, int t , float r);// r can be fraction/integer 
   bankdeposit( int p, int t , int  r);// r can be integer 
   void show();

};

bankdeposit :: bankdeposit (int p, int y, float r)
{
    principal =p;
    year =y;
    interestrate = r;
    returnvalue= principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interestrate);
    }
    
} 


bankdeposit :: bankdeposit (int p, int y, int r)
{
    principal =p;
    year = y;
    interestrate = float(r)/100;
    returnvalue= principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interestrate);
    }
    
} 


void bankdeposit::show   (){
    cout<<endl<<"principal amt was "<<principal<<" return value after: "<<year<<" year is: "<< returnvalue<<endl;
}
int main()  {
     
   bankdeposit bd1 ,bd2,bd3;
   int p ,y;
   float r;
   int R;

cout <<"enter the value of p , y and r and %R"<<endl;
cin>>p>>y>>r>>R;

bd1 = bankdeposit(p , y , r);
bd1.show();
bd2 = bankdeposit(p , y , R);
bd2.show();

bd3.show();


     return 0;
}