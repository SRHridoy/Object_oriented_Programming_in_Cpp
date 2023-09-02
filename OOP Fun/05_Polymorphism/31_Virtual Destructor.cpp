/*
    If we want to destroy the whole object then we need to make our base destructor virtual...
*/

#include<iostream>
using namespace std;

class BASE
{
    public:
    //If we don't use virtual then only objects half portion which is from BASE will be destroyed and DERIVED Portion remained same...
        virtual ~BASE()
        {
            cout << " BASE Class Destroyed !" << endl;
        }
        // void show(){cout << "I am alive from the portion of derived !" << endl;}
};

class DERIVED : public BASE
{
    public:
        ~DERIVED()
        {
            cout << " DERIVED Class Destroyed !" << endl;;
        }
};

int main()
{
    BASE *b1 = new DERIVED;
    delete b1;
    //b1->show();
}