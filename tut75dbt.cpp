#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"enter a b "<<endl;
    cin >> a >> b;

    for (int num = a; num <= b; num++)
    {
        int i;
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }
    return 0;
}