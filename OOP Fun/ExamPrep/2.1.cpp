/*
    2.1 Write a program to display the following output using a single cout statement.

Maths = 90
Physics = 77
Chemistry = 69
*/
#include<iostream>
using namespace std;

class COUT
{
    public:
    void show()
    {
        cout << "Maths = 90" << endl;
        cout << "Physics = 77" << endl;
        cout << "Chemistry = 69" << endl;
    }
};

int main()
{
    COUT c1;
    c1.show();
    
}