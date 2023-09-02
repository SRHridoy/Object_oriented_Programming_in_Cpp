/*Base class pointer and derived class object : 

    (i)Can only access features of base class.
    
    (ii)Example: Basic Car (Base class) inherited by Advanced car(Derived class). Sitting on the basic car pointing to advanced car doesn't mean this basic car is advanced car

                                            */

#include<iostream>
using namespace std;

class BASIC_CAR{
    public:
        void body();
        void door();
        void windows();
        void tyres();
};

class ADVANCED_CAR:public BASIC_CAR{
    public:
        void ABS();
        void PS();
        void EngineV8();
        void AT();
};

int main()
{
    BASIC_CAR *ptr;
    ptr = new ADVANCED_CAR();

    ptr->body();
    ptr->door();
    ptr->tyres();
    ptr->windows();

    //but below these are inaccecible...
    
    // ptr->ABS();
    // ptr->PS();
    // ptr->EngineV8();
    // ptr->AT();
}