#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        void fun()      //1000
        {
            cout<<"Inside Base fun"<<"\n";
        }
        virtual void gun()  //2000
        {
            cout<<"Inside Base gun "<<"\n";
        }
       virtual void sun()       //3000
        {
            cout<<"Inside Base sun"<<"\n";
        }
         virtual void run()     //4000
        {
            cout<<"Inside Base run"<<"\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;
        
        void gun()      //5000
        {
            cout<<"Inside Derived gun"<<"\n";
        }
        virtual void run()  //6000
        {
            cout<<"Inside Derived run"<<"\n";
        }
        virtual void mun()  //7000
        {
            cout<<"Inside Derived mun"<<"\n";
        }


};

int main()
{
    // cout<<"Size of Base class:"<<sizeof(Base)<<"\n";        //8     //12
    // cout<<"Size of Derived class:"<<sizeof(Derived)<<"\n";  //16    //20

    // Base *bp = NULL;
    // Derived dobj;
    // bp=&dobj;   //upcasting

    // bp->fun();
    // bp->gun();
    // bp->sun();

    // Base *bp=NULL;
    // Derived dobj;
    // bp= &dobj;
   
    // Base *bp=new Derived;

    Derived dobj;
    Base &bref=dobj;
    bref.fun();  // Base fun
    bref.gun();  //Derived gun
    bref.sun();  //Base sun
    bref.run();  //derived run

    // bp->fun();  // Base fun
    // bp->gun();  //Derived gun
    // bp->sun();  //Base sun
    // bp->run();  //derived run
    // bp->mun();  //Error

    return 0;
}