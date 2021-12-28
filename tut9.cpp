//if else constrol str

#include <iostream>
using namespace std;
int main(){

   /* 
    c++ control structure
    3 types     sequence str ,selection str , loop str; are  basic control str
    
    sequence str  << taken entry << action 1 << action 2 << exit
   
    selection str << entry << condition (true/false output )is ture than action 1 if falsse then action 2 (tree probability type) <<end

    loop str << entry << loop << condn check << aaction 1(true)<< loop << repeat till true << if false / ans change << exit
 
   1. if-elese statement 
   2. if else ladder 
   3. switch case              */

    /* if-else             
                 int age;
                 cout<< "tell me your age "<<endl;
                 cin>>age;
                 
                 
                 if ((age<18) && (age>1)) { 
                      cout<< "you are not  allowed to my party"<<endl;
                                                                         }
               else if (age==18) {
                   cout<<"welcome to party but no bear for you"<<endl;
                                                                         }
               else if (age<1) {
                   cout<< "paida toh hojaa "<<endl;   
                               }
                   else {
                       cout<<"welcome to party hold my bear"<<endl;
                   }
                                                                  */

                
                 //switch case statement
                 
                 int age;
                 cout<<"entre your age"<<endl;
                 cin>>age;
                 switch (age)
                 {
                 case 18:
                     
                     cout<< "you are 18";

                     break;
                 case 22 : 
                    
                     cout<< "you are 22";
                     
                     break;
                     case 2 :
                    
                     cout<< "you are 2";
                     
                     break;
                 
                 //break break statement if not all statement will be shown after true statement
                 
                 default:
                 cout<<"tata bye bye";

                     break;
                 }                                                



    return 0;
}