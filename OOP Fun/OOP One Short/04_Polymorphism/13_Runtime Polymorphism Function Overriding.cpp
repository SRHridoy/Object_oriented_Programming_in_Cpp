/*
Runtime Polymorphism : 
                        (i)Function Overriding : parent funciton e virtual use kora lagbe
*/

#include<iostream>
using namespace std;

class Parent
{
    public:
        virtual void print()
        {
            cout << "Parent Class" << endl;
        }
        void show()
        {
            cout << "Parent Class" << endl;
        }
};

class Child :public Parent
{
    public:
        void print()
        {
            cout <<"Child Class" << endl;
        }
        void show()
        {
            cout << "Child Class "<< endl;
        }
};

int main()
{
    Parent *p;
    Child c;
    p = &c;
    p->print();
    p->show();
}