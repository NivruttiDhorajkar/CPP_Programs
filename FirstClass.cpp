#include<iostream>
using namespace std;

class Maths
{
    public:     //Access Specifier
        int iNo1;   //Characteristics
        int iNo2;        //Characteristics

    Maths()     //Constrctor(Default)
    {
        iNo1=0;
        iNo2=0;
    }

    Maths(int A, int B)     //constructor(Parameterised)
    {
        iNo1=A;
        iNo2=B;
    }
    int Addition()      //Behaviour
    {
        return iNo1+iNo2;
    }

    int Substraction()      ////Behaviour
    {
        return iNo1-iNo2;
    }

};

int main()
{
    Maths mobj1;
    Maths mobj2(10,11);
    int Ret=0;

    Ret=mobj2.Addition();
    cout<<"Addition is:"<<Ret<<"\n";

    Ret=mobj1.Addition();
    cout<<"Addition is:"<<Ret<<"\n";

    Ret=mobj2.Substraction();
    cout<<"Substraction is:"<<Ret<<"\n";

    Ret=mobj1.Substraction();
    cout<<"Substraction is:"<<Ret<<"\n";



    return 0;
}