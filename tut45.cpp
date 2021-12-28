//example of virtual base class
#include <iostream>
using namespace std;

//class student inherited into test and sports now test and sports by multiple inheritance make result class 
//now student data will comes 2 time so we make A virtual while inheriting

class student {
protected :
int rollno;
public:
void setrollno(int a){
    rollno =a;

}
void printrollnumber (){
    cout<< "your roll no is "<<rollno<<endl;
}

};

class test : virtual public student{

protected:
 float maths , physics;
public:
  void setmarks (float m1 , float m2){
      maths = m1;
      physics = m2;
  }
 void printmarks (){
cout<< "your result us here: " <<endl;
cout<< "maths: "<< maths<<endl;
cout<< "physics: "<< physics<<endl;

 }
};

class sports : virtual public student{

protected : 
           int cricketperformance, ttperformance;
public: 
        void setperformance(int cp , int ttp){
            cp = cricketperformance;
            ttp = ttperformance;

        }

        void sportsresult(){
            cout<<"your cricket performance is: "<<cricketperformance<<endl;
            cout<<"your tabbletennis performace: "<<ttperformance<<endl;

        }


};

class result : virtual public test , virtual public sports { 
public:
void finalresult(){
    printrollnumber();
    printmarks();
    sportsresult();
    cout<<"your (physics + maths) overall subject percentage obtain is "<<(maths+physics)/2<<endl;
    cout<<"your (cricket + tabletennis) overall sports percentage obtain is "<< (cricketperformance+ttperformance)/2 <<endl<<endl<<endl;


}


};


int main()  {

    result soji, noji;
    soji.setrollno(1);
    noji.setrollno(2);

    soji.setmarks(90 , 99);
    noji.setmarks(37, 49);

    soji.setperformance(3,3);
    noji.setperformance(9,9);

    soji.finalresult();
    noji.finalresult();
     
     return 0;
}