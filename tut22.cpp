/*                                                                                          
    //oops--classes and objects
    
    c++ initially called c with classes by stroustroup
    classs----> extension of structures (in c)
    //structures had limitation
               --member are public
               --no methhods
               classes -----> structures + more 
               classes -----> can have methods and properties
               classes -----> can make few member private as well as public
               
               structures in c++ are typedefed(giving nickname to structures)
               
               you can declare object along with the class decleration
               syntax:->    
                   class employee {
                       //class defn
                   } harry , ashu, lovish;

                   //harry.salary = 054334 make no sence if salary is private


                   // Nesting of member functions
                   type of shortcut like if chk_bin function in main  named b.check_bin;
                   is removed and placed in oonce complement by syntax--->chk_bin();
                   then it will check internallly before procedding to once compliment fnction so 
                   we not need to write it in main function;
               */

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void once_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary no." << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::once_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            (s.at(i) = '0');
        }
    }
}

void binary ::display(void)
{
    cout << "displaying your binary no." << endl;
    for (int i = 0; i < s.length(); i++)
    {

        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.once_compliment();
    b.display();

    return 0;
}