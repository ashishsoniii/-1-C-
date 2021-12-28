//pointers to object in class && arrow operators

#include <iostream>
using namespace std;


class complex {
    int real , imaginary;
    public:
    void getdata(){
        cout<<"the real part is " <<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;

    }

   void setdata(int a, int b){
    real = a;
    imaginary = b;
   }


};



int main()  {
     complex c1;
     complex *ptr = &c1;

     complex *jpr = new complex ;

     (*jpr).setdata(6,2);
     (*jpr).getdata();
     c1.setdata(4,5);
     c1.getdata();
     (*ptr).setdata(4,5);
     (*ptr).getdata();

   
   //arrow operator
     complex *jprji = new complex ;
     jprji ->setdata(6,88); 
     jprji ->getdata();
    //  uppper one is same as
   (*jprji).setdata(6,88);
   (*jprji).getdata();

// array of objects

complex *ntr = new complex[4];
ntr->setdata(4,8) ;
ntr->getdata();








     return 0;
}