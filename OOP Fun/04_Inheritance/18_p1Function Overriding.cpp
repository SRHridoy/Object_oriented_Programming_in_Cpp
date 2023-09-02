#include<iostream>
using namespace std;

class BASE
{
    public:
        void features()
        {
            cout << "Features of BASE class !!!" << endl;
        }
};

class DERIVED
{
    public:
        void features()
        {
            cout << "Features of DERIVED Class ... "<< endl;
        }
};

int main()
{
//Function overriding : Redefining functionality of BASE claass into DERIVED class, then if we create object of derived class...
    DERIVED d1;
    //here derived class function will be invoked...
    d1.features();
}