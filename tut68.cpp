//member function template and overloading template fn


#include <iostream>
using namespace std;


template <class t>
class soni{
 public : 
 t data;
    soni(t a){
        data = a;
    }
    void display();
};



template <class t>
void soni <t> :: display(){
        cout<<data;
    }

void func (int a ){
    cout<<"i am 1st func() "<<a<<endl;
}

template <class t>
void func (int a ){
    cout<<"i am templatised func() "<<a<<endl;
}



int main()  {
     
    //  soni<int> j(7);
    //  cout<<j.data<<endl ;
    //   j.display();
    //  cout<<endl;

    //  soni<double> ji(34567);
    //  cout<<ji.data<<endl ;
    //   ji.display();
    //  cout<<endl;

    //  soni<char> jii('f');
    //  cout<<jii.data<<endl ;
    //   jii.display();
    //  cout<<endl;


   func(4); // exact match takes highest priority
   func<float> (77654.7);
     return 0;
}