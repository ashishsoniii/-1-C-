#include<iostream>
using namespace  std;
int main() { 

/* loops is c++ 
 3 types 
 1. For loop
 2. while loop 
 3. do-While loop
                    */
    
                                     // for loop

// for (initiation ; condition ; updation)
//       { code }


 // for (int i = 0; i <= 10 ; i++)
 // {
 //     /* code */
 //     cout<<i<<endl;
 //     
 // }
  
  //example of infinite loop
  
  /* for (int i = 1; 34<=40 ;i++)
   {
       cout<<i<<endl; 
   }                                */


 // While loop
       /* syntax
             while(condition)
              {
                   statement
              }                               */
//printing  1 to 20 usign while
     //      int i=1;
     //         while(i<=20){
     //        
     //         cout<<i<<endl;
     //         i++;
               
// do While loop
    //      int i=1;
    //      do
    //      {
    //         cout<<i<<endl;
    //         i++;
    //      } while (i<6);
             
  // 6 ki tabble

   int i=1,b=6;
   do{
       cout<<i*b<<endl;
       i++; 
   }  while (i<11) ;        

 


return 0;

}