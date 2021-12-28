/*   
     virtual base class 

                class A
                /    \
        class B        class C
                \    /     
                class D
              
suppose A inherited into class B & C then function soni will be inherited into-
both class B and C  and again by multiple inheritance if new class D is inherited then soni will be again inherited buttt
from both class B & C so ambiguity in inheritance will occure which will give error so soln to this is to make virtual base class 
and will save from ambiguity and repetation 
by using this syntax A will be virtual base class for B and C to prevent ambiguity.


 its syntax is :-
                 class B : virtual public A{

                 };
                 class C : virtual public A{

                 };
                  
                   
                   
                   
                   


*/