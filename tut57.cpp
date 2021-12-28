//virtual fn exampple + creation rule in c++

#include <iostream>
#include <cstring>
using namespace std;

class cws{
protected:
  string title;
  float rating;
  public: 
     cws(string s , float r){
    
      (title = s);
      rating = r;

     }

    virtual void display(){

    }
};

class cwsvideo :public cws{
    int videolength;
    public:
    cwsvideo(string s , float r , float vl): cws(s,r) {
        videolength = vl;
    }

    void display(){
        cout<<"this is amazing video with title "<<title<<endl;
        cout<<"ratings: "<<rating<< " out of 5 star "<<endl;
        cout<<"length of this video is "<<videolength<<"in min"<<endl<<endl;
    };
};

class cwstext :public cws{
    int word;
    public:
    cwstext(string s , float r , int wc): cws(s,r) {
        word =wc;
    }
    void display(){
         cout<<"this is amazing text with title "<<title<<endl;
        cout<<"ratings of this text : "<<rating<< " out of 5 star "<<endl;
        cout<<"no of words in this text tut is  "<<word<<"in min"<<endl<<endl;
    };
};

int main()  {
     
string title ;
float rating , vlen;
int words;


//for code with soni video

title = "web development";
vlen = 4.56;
rating = 4.98;
cwsvideo djvdo(title , rating , vlen);
djvdo.display();

//for code with soni text

title = "web development text";
words = 4.56;
rating = 4.58;
cwstext djvdoi(title , rating , words);
djvdoi.display();


cws* tuts[2];
tuts[0] = &djvdo;
tuts[1] = &djvdoi;

tuts[0]->display();
tuts[1]->display();
     return 0;
}


/* Rules for virtual finctiom
1. they cannot be static
2. they are accessed by object programming
3. virtual function can be a friend of another class
4. a virtual function in  base class might not ve used.
5. if a virtual function defined  in the base class, there is  no necessity of redefineing it in the derived class
