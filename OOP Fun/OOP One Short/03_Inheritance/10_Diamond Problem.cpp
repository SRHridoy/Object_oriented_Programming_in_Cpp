//Base class has multiple parent class having a common ancesstor class...
#include<iostream>
using namespace std;

class Parent
{
    public:
        Parent()
        {
            cout << "Parent class" << endl;
        }
};
//2 jaigai virutal use korar jonne ambiguity dur hoise...
class Child1:virtual public Parent
{
    public:
        Child1()
        {
            cout << "Child1 class" << endl;
        }
};
class Child2:virtual public Parent
{
    public:
        Child2()
        {
            cout << "Child2 class" << endl;
        }
};

class GrandChild:public Child1,public Child2
{
    public:
        GrandChild()
        {
            cout << "Grandchild Class" << endl;
        }
};

int main()
{
    GrandChild g;
}