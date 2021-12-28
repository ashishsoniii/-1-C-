// file I/O in c++: Reading and writing files

#include <iostream>
#include <fstream> // to play with file read write etc

/* the useful classes for working with files in c++ are:
      1. fstreambase 
      2. ifstream --> derived from fstreambase
      3. ofstream -->derived from fstreambase


In order to work with file in c++, youu will have yo open it. primarly, there are 2 ways to opean a file:
      1. using the constructor
      2. using the member function open() of the class.
      */
using namespace std;

int main()  {

    string st = "soni bhaiji ram ram ";
    string st2;
 

    // //opeaning file using constructor and writing it.
    // ofstream out("tut60 sample.txt"); //write operation
    //  out<<st;
    //  cout<<st;

    //opeaning file using constructor and reading it
     ifstream in("tut60sample.txt" );
    // in>>st2;//read only 1st word
 getline(in, st2);//1st line
 getline(in, st2);//2nd line 
 getline(in, st2);//3rd line
 

     cout<<st2; 


     return 0;
}