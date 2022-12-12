#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;

        //Parameterised constructor with DEFAULT values
        Demo(int x=10, int y=20)
        {
            i=x;
            j=y;
        }

        void fun()
        {
            i++;
            j++;
        }

        void gun() const
        {
            // i++;
            // j++;
        }
};

int main()
{
    Demo obj1;  //10 20
    Demo obj2(11);  //11 20
    Demo obj3(11,21);   //11,21

    obj1.fun();
    obj2.fun();
    obj3.fun();

    // obj1.gun();      //Not Allowed
    // obj2.gun();      //Not Allowed
    // obj3.gun();      //Not Allowed

    return 0;
}