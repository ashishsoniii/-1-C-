/* 

C++: FILE I/O [READING & WRITING YO A FILE ]

3use ful classes 
1. fstreambase 
2. ifstream : derived from fstreambase
3. ofstream : derived from fstreambase
                     these three classses comes from header file  <fstream>
 
 # Read operation 
    ifstream in("this.txt");
    string st;
    in>>st; //just like cin>>

 #write operation
    ofstream out("thisis.txt");
    string st1 = "harry";
    out<<st1; write to a file to thisis.txt;
*/

#include <iostream>
#include <fstream>

using namespace std;



int main()  {
    // connection our file with hout stream
     
     ofstream hout("tut61.txt");
     
     //creating the name string and filling it with the string entered by the user
     cout<<"Enter your name: "<<endl;
     string name;
     cin>>name;

    // writing string to the file 
     hout<<"my name is "<< name;
//use getline if to write full ashish soni with space ; it take on;ly one
    hout.close();

    ifstream hin("tut61.txt");
    string content;
    hin>>content;
    cout<<"the content of this file is : "<<content;


     return 0;
}