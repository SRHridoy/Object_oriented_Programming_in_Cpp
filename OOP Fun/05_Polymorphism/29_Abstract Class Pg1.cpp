#include<iostream>
using namespace std;

class PERSON    //Abstract Class
{
    public:
    //Pure virtual class: And this must don't have any body...
        virtual void give() = 0;
};

class BOY:public PERSON
{
    public:
        virtual void give() {cout << "Brown Bun" << endl;}
};

class GIRL:public PERSON
{
    public:
        virtual void give() {cout << "Pink Bun" << endl;}
};

int main()
{
    BOY b1;
    GIRL g1;

    // PERSON *ptr = &b1;
    // ptr->give();
    PERSON *ptr = NULL;
    ptr = &b1;
    ptr->give();

    ptr = &g1;
    ptr->give();
}