//static data members & methodsin c++ oops


#include <iostream>
using namespace std;

class employee{

    int id;
    static int count;
   

   public:
   void setdata(){
       cout <<"enter the id "<<endl;
       cin>>id;
       count++;
   }
   void getdata(){
       cout<<"the id of employee is " <<endl;
       cout<<id<<" and this is employee number "<<count<<endl;
   }


   static void getcount(){
       cout<<"the value of count is "<< count<<endl;

   }


};

 int employee ::  count ;   //default  value is 0

 int main()  {
     
    employee harry;
    employee rohan;
    employee lavish;
    //harry.id=1
    //harry.count=1; //cant do this as id and count are private

     harry.setdata();
     harry.getdata();
    employee :: getcount();
     
     rohan.setdata();
     rohan.getdata();
     employee :: getcount();
     
     lavish.setdata();
     lavish.getdata();
     employee :: getcount();

     return 0;
}