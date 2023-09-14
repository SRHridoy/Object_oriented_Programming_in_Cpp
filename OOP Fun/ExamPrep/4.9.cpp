/*
4.9 Write a program to compute the area of a triangle and a circle
by overloading the area( ) function.
*/

#include<iostream>
using namespace std;

class AREA
{
    public:
        void area(int r);
        void area(int b,int h);
};

void AREA::area(int r)
{
    float result = 3.1416*r*r;
    cout <<"Area of the circle is : " << result << endl;
}

void AREA ::area(int b, int h)
{
    float result = .5*b*h;
    cout << "Area of the triangle is : "<<  result << endl; 
}

int main()
{
    AREA a1;
    a1.area(1);

    a1.area(4,3);
}