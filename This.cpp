#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        float f;
        double d;

    void fun(int A)     //void fun(Demo *this,int A)
    {
        cout<<"Inside fun\n";
        cout<<this<<"\n";
        cout<<this->i<<"\n";
        cout<<A<<"\n";
    }

    void gun(int A, int B)      //void gun(Demo *this, int A, int B)
    {
        cout<<"Inside gun\n";
        cout<<this<<'\n';
         cout<<this->i<<"\n";
           cout<<A<<"\n";
             cout<<B<<"\n";
    }
};

int main()
{
    Demo obj1;
    Demo obj2;

    obj1.i=101;
    obj2.i=201;

    obj1.fun(11);       //fun(&obj1,11);
    obj2.fun(12);       //fun(&obj2,12);

    obj1.gun(45,60);
    obj2.gun(54,23);

    return 0;
}