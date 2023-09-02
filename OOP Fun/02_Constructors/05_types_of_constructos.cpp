/*
    3 Types:
        i. Non-parameterized Constructor or Default Constructor.
        ii. Parameterized Constructor.
        iii. Copy Constructor.
*/
//If constructors is not created , compiler create its own constructor having some garbase values...

#include<iostream>
using namespace std;

class A
{
    string name;
    int age;
    float height;

    public:
        A()
        {
            name = "Hridoy";
            age = 22;
            height = 00;
        }

        void getData()
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Heigt : " << height << endl;
        }


};

int main()
{
    A person01;
    person01.getData();
}