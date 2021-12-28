// list in c++ STL


#include <iostream>
#include <list>


using namespace std;


void display (list<int> &lst){
    list<int> ::iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
       cout<<*it<<" ";
    }
    
}


int main()  {

list<int> list1; //list of 0 lingth
list <int> list2(3); //emplty list of size seven7
list<int> :: iterator iterji;
iterji = list2.begin();
*iterji = 45;
iterji++;
*iterji = 15;
iterji++;
*iterji = 95;
iterji++;




list1.push_back(5);
list1.push_back(7);
list1.push_back(9);
list1.push_back(3);
list1.push_back(6);
list1.push_back(1);
list1.push_back(9);

list<int> :: iterator iter;
iter = list1.begin();




// cout<<*iter<< " ";
// iter++;
// cout<<*iter<<" ";
// iter++;
// cout<<*iter<<" ";
// iter++;
// cout<<*iter<<" ";
// iter++;
// cout<<*iter<<" ";
// iter++;
// cout<<*iter<<" ";
// iter++;
// cout<<*iter<<" ";

// using display fn instead of upone

display(list1);
list1.pop_back();//remove last element
list1.pop_back();//remove last 2nd if 2 applied
list1.pop_front();//remove from starting;
display(list1);

cout<<" <-----endl of list 1 "<<endl;
display(list2);
cout<<endl;
list2.remove(15); //remove list from element if 2 of same present both will remove
display(list2);
cout<<endl;
cout<<"final lists are" <<endl;
display(list1);
display(list2);
cout<<endl;
//merging lists;

cout<<"list 1 after merging with list 2 "<<endl;
list1.merge(list2);
display(list1);

// shorting the list
cout<<endl;  
list1.sort();
cout<<"list1 after shorting : "<<endl;
display(list1);

//reversingv the list
cout<<endl;
cout<<"reverse the list"<<endl;
list1.reverse();
display(list1);





     return 0;
}