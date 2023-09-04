/*
    Ability of objects / methods to take different forms ...

    (I) Compile time Polymorphism: 

        ---->Funtion Overloading :
                define a number of functions with same function name but they perform differently according to the arguments passed.

        ---->Operator Overloading
*/
#include<iostream>
using namespace std;

class Sum
{
    public:
        void add(int x, int y)
        {
            cout << x+y << endl;
        }

        void add(int x, int y, int z)
        {
            cout << x+y+z << endl;
        }

        void add(float x, float y)
        {
            cout << x+y << endl;
        }
};

int main()
{
    Sum s;
    s.add(2,3);
    s.add(2,3,4);
    //Specify korte hobe int sara onno gula hole
    s.add(float(3.2),float(2.3));
}