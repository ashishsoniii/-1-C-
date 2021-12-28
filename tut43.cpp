//Ambiguity resolution

#include <iostream>
using namespace std;


class base1
{
public: 
void greet(){
    cout<<"how are you? "<<endl;
}


};

class base2
{
public:
void greet(){
    cout<<"kesam ba? "<<endl;
}


};

class derived : public base1 , public base2{
    int a;
    public:
    void greet(){       ///////////Ambiguity resolving by mdecleration by::
        base2::greet();
    }
};

class B
{
public:
void say(){
    cout<<"hello world"<<endl;
}};


class D: public B
{
int a;
public:
 void say(){
    cout<< "hello my beautiful people! "<<endl;
}

//if ambiguity occures in class d and b an id we make object in d and greet present in both then function made in respected class will oucur if in given class no object of same is present it there will be no ambiguity
//or you have to give decleration 


};

int main()  {
     base1 obj1;
     base2 obj2;
     obj1.greet();
     obj2.greet();
// ambiguity 1 resolved by decleration above 
     derived obj3;
     obj3.greet();

     return 0;
}