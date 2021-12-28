//constants manipulators and operator precedemce

#include <iostream>
# include <iomanip>    //header file use for setw
using namespace std;

int main() {
     //  int a = 34;
        //  char c = 'f';

      // cout<<  "the value of a was " <<a;
      // cout<<  "\n the value of c was " <<c;
       
      //   a = 346;
      //   c = 'u';

      //  cout<<"\n the value of a is " <<a;  
      //  cout<<"\n the value of c is " <<c<<endl;  

         //constants in c++
      //   const int a = 3;  
        // now we cant change value of a if done errore will be given
        //               cout<<  "the value of a was " <<a;
          //            a=44;
            //          cout<< "new value of a is " <<a;     
  
  
  // manipulators in c++


                  int a=3, b=49 , c=12345674 ;
                 cout << "the value of a with setw is "<<setw(4)<<a<<endl;
                 cout << "the value of b with setw is "<<setw(4)<<b<<endl;
                 cout << "the value of c with setw is "<<setw(4)<<c<<endl;
                 // setw is present in <iomanip>
                 //setw define width(tens end at 1 2 3 4 position) ie check result
                 //without setw no start wit 1st letter
                 
                 
                 cout << "the value of a is "<<a<<endl;
                 cout << "the value of b is "<<b<<endl;
                 cout << "the value of c is "<<c<<endl;           

  /*    //operator precedence
           int a = 3, b=4;
           int c = ((((a*5)+b)-45)+87) ;
           int d = a*5+b-45+87;
           cout <<c<<endl;
           cout <<d;
*/




    return 0;

}