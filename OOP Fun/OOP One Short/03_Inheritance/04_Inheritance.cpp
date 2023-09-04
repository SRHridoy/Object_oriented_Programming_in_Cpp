/*
    Access Specifiers and Modes of Inheritance :
    
        (i)Public: if Data & function are public then they can be accessed from anywhere in the code.

        (ii)Private:Accessible only in own class...

        (iii)Protected: if Data & function are protected then they can be accessed in own class but not in main function , parent class and in derived class...
*/

#include<iostream>
using namespace std;

class Parent
{
    public:
        int x;
    
    protected:
        int y;

    private:
        int z;
};

class Child1:public Parent
{
    /*
        (i) x will remain Public
        (ii) y will remain Protected
        (iii) z will not be accessible
    */
};

class Child2:private Parent
{
    /*
        (i) x will be private
        (ii) y will be private
        (iii) z will not be accessible
    */
};

class Child3:protected Parent
{
    /*
        (i) x will be protected
        (ii) y will be protected
        (iii) z will not be accessible
    */
};

int main()
{
    Parent p;
    p.x = 5;

    //p.y = 3; Wrong
    //p.z = 3;  Wrong

}