//IMPORTANT------->
#include<iostream>
using namespace std;

class BASE{
    public:
        BASE()
        {cout << "Default constructor from BASE Class!!!" << endl;}
        BASE(int a)
        {
            a = 100;
            cout << "Parameterized constructor from BASE Class!!!" << a << endl;
        }
};

class DERIVED:public BASE{
    public:
        DERIVED():BASE()
        {cout << "Default constructor from DERIVED Class..." << endl;}
        DERIVED(int b):BASE(b)
        {cout << "Parameterized constructor from DERIVED Class ..." << b << endl;};
};

int main(){

//Frist of all when we create d1 at first the default constructor of the BASE class is invoked and then the default constructor of the DERIVED class is invoked...

DERIVED d1;

// In the case of parameterized constructor the parameterized constructor of base class will be  invoked first then the parameterized constructor of the DERIVED class will be invoked...

DERIVED d2(5);

}