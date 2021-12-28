//last hai 

//function objects in c++ STL
//function object: function wrapped in a class so that it available like an object 

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()  {
     int arr[] = {1, 22 , 5 ,7 ,9 ,44, 11,77,33,33};
     sort(arr, arr+5);//will short up to 6th element in increasing order
     sort(arr, arr+5, greater<int>());//desending order
    
     for (int i = 0; i < 10; i++)
     {
         cout<<arr[i]<<" ";
     }
     
     return 0;
}





//c++ code with h completed