//IMPORTANT------->
#include<iostream>
using namespace std;

class BASE{
    public:
        BASE(){cout << "Default constructor from BASE Class!!!" << endl;}
        BASE(int a){cout << "Parameterized constructor from BASE Class!!!" << endl;}
};

class DERIVED:public BASE{
    public:
        DERIVED(){cout << "Default constructor from DERIVED Class..." << endl;}
        DERIVED(int a){cout << "Parameterized constructor from DERIVED Class ..." << endl;};
};

int main(){

//Frist of all when we create d1 at first the default constructor of the BASE class is invoked and then the default constructor of the DERIVED class is invoked...

DERIVED d1;

// In the case of parameterized constructor the parameterized constructor of base class won't invoked but the BASE Class default will be invoked first the parameterized constructor of the DERIVED class will be invoked...

DERIVED d2(5);

}