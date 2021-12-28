//friend function in c++

#include <iostream>
using namespace std;

class complex{

    int a,b;

    public:

       void setnumber(int t1 , int t2){
       a=t1;
       b=t2;
       
       }
       friend complex sumcomplex(complex o1 , complex o2);// give access to private data; gives permission but it not make memeber function to this classs ;


       void printnumber(){
           cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;

       }



};

complex  sumcomplex(complex o1 , complex o2){
    complex o3;

    // 6. cout<<a; no sense 
    o3.setnumber ((o1.a+o2.a) , (o1.b+o2.b)) ;
    return o3;
}
int main()  {
     
    complex c1,c2,sum;
     c1.setnumber(5,9);
     c1.printnumber();

     c2.setnumber(7,7);
     c2.printnumber();

     sum = sumcomplex(c1,c2);
    sum.printnumber();


     return 0;
}

/* properties of friend function

1. not in scope of class. ie. not member of class
2. since it is not in the scope of the class \, it cannot be called from the object of that class -->c3.sumcomplex(); == invalid;
3. can be invoke without help of any object.
4. usually contains rthe object as argument.
5. can be declared inside public or private function of class.
6. it cannot access the member directly by their names and need object_name.member_name  to access any member.



*/