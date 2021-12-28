#include <iostream>
using namespace std;

int main()  {
    
     //array
    
    int marks[4] = {23,24,25,26};
    //or 
    int mathmarks[3];
    mathmarks[0] = 41;
    mathmarks[1] = 411;
    mathmarks[2] = 4111;

cout<<"these are math marks"<<endl;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;

cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    //to change value of marks 2
    marks [2] = 3456;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl; 

    for(int i =0;i<4;i++)
    {
        cout<<"the value of marks"<<i<<"is "<<marks[i]<<endl;
    }
    //do with dowhile and while

cout<<endl;
cout<<endl;

    



int*p = marks;
cout<<"the vale of marks[0] is"<<*p;

     return 0;
}