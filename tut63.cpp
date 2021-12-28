/* TEMPLATES

class  ---> object (obj ke liye template classs hai)
template --> class(class ke lliye template template khud hai)
{Templates called parametrized classes}

why use Templates?
to usr DRY principle (do not repeat yourself);
generic programming

Syntax for templates


template <classs T>        {represent many classes}
 class vector{
     T*arr;                    T cann be int, float, char , etc
     public:
       vector(T*ar){
           code


       }
 };

 int main(){
     vector<int> myvec(ptr);
     vector<float>myfvec(ptr);
 }



learn template STL





*/