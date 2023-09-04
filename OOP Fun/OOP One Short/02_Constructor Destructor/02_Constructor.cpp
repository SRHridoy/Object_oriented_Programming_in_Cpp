#include<iostream>
using namespace std;

class Rectangle
{
    public:
        int l;
        int b;

//Default constructor - no arguments passed
        Rectangle()
        {
            l = 0;
            b = 0;
        }

//Parameterised constructor - arguments passed
        Rectangle(int x, int y)
        {
            l = x;
            b = y;
        }

//Copy Constructor - objects passed as argument...It initailize an object by anothere existing object.

        Rectangle(Rectangle &r)
        {
            l = r.l;
            b = r.b;
        }
};

int main()
{
    Rectangle r1;
    cout << r1.l << " " << r1.b << endl;

    Rectangle r2(4,5);
    cout << r2.l << " " << r2.b << endl;

    // Rectangle r3;
    // r3 = r2;
    Rectangle r3 = r2;
    cout << r3.l << " " << r3.b << endl;

}