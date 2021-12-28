//classes public private

#include <iostream>

using namespace std;

class employee
{

private: //important we can't give information direct to variable prensent in private
     int a, b, c;

public:
     int d, e;

     void setdata(int a1, int b1, int c1); //declaration
     void getdata()
     {
          cout << "the value of a is " << a << endl;
          cout << "the value of b is " << b << endl;
          cout << "the value of c is " << c << endl;
          cout << "the value of d is " << d << endl;
          cout << "the value of e is " << e << endl;
     }
};

void employee ::setdata(int a1, int b1, int c1)
{
     a = a1;
     b = b1;
     c = c1;
}
int main()
{

     employee ashu;
     //ashu.a =111 cant do this bcz it is peivate variable; so will throw  error
     ashu.d = 66;
     // ashu.d = 11;
     ashu.e = 33;
     ashu.setdata(1, 2, 99);
     ashu.getdata();

     return 0;
}