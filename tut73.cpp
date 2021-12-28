//maps in c++ STL

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()  {
     //always reference website like cppreference.com and all

     //Map is an associative array

     map<string, int> marksmap;
     marksmap["soni"] = 98;
     marksmap["shyam"] = 68;
     marksmap["soniji"] = 99;
     map<string , int> :: iterator iter;

   marksmap.insert({{"kokuji" , 22}, {"kakoji" , 38}});

     for(iter=marksmap.begin();iter!=marksmap.end();iter++){
         cout<<(*iter).first<<" "<<(*iter).second<<"\n";
          //first will will display all name like soni wgre ;;;; second will represent marks 
     }

    

      cout<<"the size is : "<<marksmap.size()<<endl;
      cout<<"the max size is : "<<marksmap.max_size()<<endl;
      cout<<"the emplty return value is : "<<marksmap.empty()<<endl;


     return 0;
}