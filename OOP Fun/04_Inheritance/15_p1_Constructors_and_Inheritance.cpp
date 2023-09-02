#include<iostream>
using namespace std;

class BASE{
    public:
        BASE(){cout << "Default constructor from base class is invoked..." << endl;}
        
        BASE(int b)
        {cout << "Parameterized Constructor of base class : " << b << endl;}
};

class DERIVED:public BASE{
    //Empty...
};

int main()
{
//If we don't specify any constructor of derived class then the default constructor of a base class will be invoked when we try to create obj in derived class...
    DERIVED d1;
//but the parameterized constructor is not invoked ...
    //DERIVED d2(2);
}