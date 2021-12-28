#include <iostream>
using namespace std;

// function overloding
int sum (int a , int b, int c ){
    cout <<"using fn with 3 arguments"<<endl;
    return a+b+c;
}
int sum (int a , int b ){
    cout <<"using fn with 2  arguments"<<endl;
    return a+b;
}
// cylinder
int volume (double r , int h){
cout <<"shape is cylinder"<<endl;
    return 3.14 * r * r * h;
}
//cube
int volume (int a) {
    cout<< "shape is cube"<<endl;
    return a*a*a;

}
//rectangle
int volume (int l , int b , int h ) {
    cout<<" shape is rectangle"<<endl;
    return l*b*h;
}

int main()  {
     cout <<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
     cout <<"the sum of 3 and 6 and 2 is "<<sum(3,6,2)<<endl;

     cout <<"the volm of rectangle with dimension 3x4x5"<<volume(3,4,5)<<endl;
     cout << "the volm of cylinder r = 5 , h= 7 is"<< volume(5,7)<<endl;
     cout <<" the volm of cube with side 3 is "<<volume(3)<<endl;



     return 0;
}