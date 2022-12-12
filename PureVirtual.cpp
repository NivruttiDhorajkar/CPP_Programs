#include<iostream>
using namespace std;

class Circle
{
    public:     //Access specifier
        float PI;   //Characteristics
        float Radius;

        Circle()        //Default constructor
        {
            PI=3.14;
            Radius=0.0;
        }

        Circle(float A, float B)    //Parameterised constructor
        {
            PI=A;
            Radius=B;
        }

        void Display()  //Concrete method
        {
            cout<<"Value of Radius is:"<<Radius<<"\n";
        }

        virtual float Area()=0; //Abstract method
        virtual float Circumferance()=0;    //Abstact method

};

class Marvellous: public Circle
{
    public:
        Marvellous():Circle()
        {

        }
        Marvellous(float X, float Y): Circle(X,Y)
        {

        }

        float Area()    //Concrete Method
        {
            float Ans=PI*Radius*Radius;
            return Ans;
        }

        float Circumferance()   //Concrete method
        {
            float Ans=0.0;
            Ans=2*PI*Radius;
            return Ans;
        }

};

int main()
{
    Marvellous mobj1;
    Marvellous mobj2(3.14,10.89);

    float fRet=0.0;
    
    fRet=mobj2.Area();
    cout<<"Area of a circle is:"<<fRet<<"\n";

    fRet=mobj2.Circumferance();
    cout<<"Circumference of circle is:"<<fRet<<"\n";

    return 0;
}