#include <iostream>
using namespace std;

template <class T>

class vector
{

public:
    int size;
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
            return d;
    } 
};

int main()
{
    vector <int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 2;

    vector <int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 5;

    int a = v1.dotproduct(v2);
    cout <<"using int -->> " <<a << endl<<endl;

    vector <float>v3(3);
    v3.arr[0] = 4.2;
    v3.arr[1] = 3.1;
    v3.arr[2] = 2.7;

    vector <float>v4(3);
    v4.arr[0] = 1.3;
    v4.arr[1] = 2.2;
    v4.arr[2] = 5.6;

    float b = v3.dotproduct(v4);
    cout <<"using float datatype--> " << b << endl;

    return 0;
}