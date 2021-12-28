// file io :opem() and eof() fn




#include <iostream>
#include <fstream>
#include <string>  //for getline

using namespace std;


int main()  {
     ofstream out;
     out.open("tut62.txt");
     out<<"this is me"<<endl;
     out<<"this is me also \n";
     out<<"this is me also also \n";
     out<<"this is me also also also \n";
     out<<"this is me also also also also \n";
     out.close();


      ifstream in;
      string st, st1,st2;
      in.open("tut62.txt");

     // use to print single word
     // in>>st>>st1>>st2;
     // cout<<st<<endl<<st1<<endl<<st2;
     // in.close();

     //for fill line inline and while to print document till end using {  eof()  } fn means end of file
     while(in.eof()==0){
          getline(in, st);
          cout<<st<<endl;
     }

     in.close();

     return 0;
}