#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        const int k;
        const int l;

        //Default constructor
        Demo() : k(11),l(21)        
        {
            i=51;
            j=101;
        }

        // Parsmeterised constructor
        Demo(int a, int b, int c, int d) : k(c),l(d)
        {
            i=a;
            j=b;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(10,20,30,40);

    obj1.i++;   //Allowed
    obj2.i++;   //Allowed

    // obj1.k++;     //Not Allowed
    // obj2.k++;     //Not Allowed

    obj1.j++;
    obj2.j++;

    // obj1.l++;       //Not Allowed
    // obj2.l++;       //Not Allowed

    return 0;
}