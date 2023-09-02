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

class DERIVED:public BASE
{
    public:
        void features()
        {
            cout << "It is the derived class :" << endl;
            BASE::features();//calling base function
        }
};

int main()
{
    DERIVED d1;
    
    d1.features();
}