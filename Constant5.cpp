#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;    //Constant Characteristics

        //Parameterised Constructor with DEFAULT values
        Demo(int x=10, int y=20): j(y)
        {
            i=x;
        }

        void fun()
        {
            int a=10;
            const int b=20;     //Constant Variable
            i++;    //Allowed (7)
            // j++;    //Not Allowed (8)
            a++;    //Allowed (18)
            // b++;    //Not Allowed (19)
        }

        void gun() const
        {
            int a=10;
            const int b=20;
            // i++;    //Not Allowed (26)    
            // j++;    //Not Allowed (26)
            a++;    //Allowed (28)
            // b++;    //Not Allowed (29)
        }
};

int main()
{
    Demo obj1(11,21);   //11 21
    const Demo obj2(11,21); //11 21     // Constant object

    obj1.fun();  //Allowed
    obj1.gun();  //Allowed

    // obj2.fun();     //Not Allowed
    obj2.gun();     //Allowed

    obj1.i++;       //Allowed
    // obj1.j++;       //Not Allowed

    // obj2.i++;       //Not Allowed
    // obj2.j++;       //Not Allowed
    return 0;
}