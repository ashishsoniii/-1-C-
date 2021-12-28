//array of objects using pointers in c++

#include <iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
    void setdata(int a , float b){
        id =a;
        price = b;

    }
void getdata(){
    cout<<"code of this item is "<<id<<endl;
    cout<<"pice of this item is "<<price<<endl;

}
};

int main()  {
     int size = 2;
    //  int *ptr = &size;
    //  int *ptr = new int [34];
    // general store 
    // veggies
    // hardware
     shop *ptr = new shop[size];
     shop *ptrtemp = ptr;
     int p, q;
     for (int i = 0; i < size; i++)
     {
         cout<<"id and price of item "<<i+1<<endl;
         cin>>p>>q;
         ptr->setdata(p,q);
         ptr++;
         ptr->getdata();
     }

     for (int i = 0; i < size; i++)
     {
         cout<<"item number:  " <<i+1<<endl;
    
         ptr->getdata();
         ptr++;
     }
     
     
     
     return 0;
}