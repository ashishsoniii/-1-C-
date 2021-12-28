//vector in c++
// array cant be resize(its pre set) whereas vector sets its size itself no limit 


#include <iostream>
#include <vector>

using namespace std;
template <class t>
void display(vector<t> &v){
cout<<"displaying vectors"<<endl;
for (int i = 0; i < v.size(); i++)
{
  cout<<v[i]<< " ";
   // cout<<v.at(i)<< " "; //same
}
cout<<endl;

}

int main()  {
    int element, size,a;
    
    //ways to create a vector
     vector<int> vec1;          // zero length vector
     vector<int> vec2(4);       // 4 lenght integer vector
     vector<char> vec3(4);      // 4 element character vector 
     vector<char> vec4(vec3);   // 4 element chracyter vector from vec3
     vector<int> vec5(6,3);     // 6 element vector of 3s

display(vec1);
display(vec2);

display(vec3);
display(vec4);
display(vec5);


// cout<<"enter size of vector"<<endl;
// cin>>size;
// for (int i = 0; i < size; i++)
// {
//     cout<<"enter "<<1+i<<" element to add to this vector"<<endl;
//     cin>>element;
//     vec1.push_back(element);
     
// }
//   //vec1.pop_back // end wala element hata do 
//   //check cplusplus vector page on web for more function;
  
//   display (vec1);
//   vector<int> :: iterator iter = vec1.begin();
//           //   use to point
//   vec1.insert (iter, 656);  // 656 will be added at first 
//   vec1.insert (iter+2, 6756);  // 6556 will be added after 2nd 
//   //vec1.insert (iter+3,6, 16);  // 16 will be added after 3rd bzc 43 line will get priority and 6 copy will be added
//   display (vec1);
 
     return 0;
}