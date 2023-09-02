#include<iostream>
using namespace std;

class PERSON
{
    public:
        virtual void give()
        {
            cout << "Bun";
        }
};

class BOY:public PERSON
{
    public:
        void give()
        {
            cout << "Brown Bun" << endl;
        }
};

class GIRL:public PERSON
{
    public:
        void give()
        {
            cout << "Pink Bun" << endl;
        }
};

int main()
{
    BOY b1;
    GIRL g1;

    PERSON *ptr = NULL;
    ptr = &b1;
    ptr->give();

    ptr = &g1;
    ptr->give();
}