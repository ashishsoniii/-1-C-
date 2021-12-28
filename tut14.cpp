#include <iostream>
using namespace std;

typedef struct employee  //typedef change name to short form // not nessesary in c++
{                        // struct can't hide data so not safe so class is better
    int eId;
    char favchar;
    float salary;

} ep ;


union money
{
    int rice;
    char car;
    float pounds;

}  ;




int main()  {
//enum use to store data and give numbring 012345678....

    enum meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
//union is just like struct but usses lesss highest vale memory and can show 1 data type


    union money m1;
    m1.rice=34;
    m1.car = 'c';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
       
       ep              ashish;
       struct employee naman;
       struct employee saurabh;
       struct employee ankur;
    
       ashish.eId =1;
       ashish.favchar='c';
       ashish.salary=923456789097777777;
       cout<<"salary = "<<ashish.salary<<endl;
       cout<<"favchar= "<<ashish.favchar<<endl;
       cout<<"eId = " <<ashish.eId<<endl;

     return 0;
}