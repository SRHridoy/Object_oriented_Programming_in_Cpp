//A static member function is a special function which can only access static member variables...Other member variable can't be accessed...

//Static member function can be called both with the help of class name and object...

#include<iostream>
using namespace std;

class STATIC_MEMBER_FUNCTION
{
    private:
        int a;
        int b;
    public:
        STATIC_MEMBER_FUNCTION()
        {
            a = 5;
            b = 5;
        }

        static int stat;

        static int staticFunction()
        {
            stat++;
            return stat;
        }
};

int STATIC_MEMBER_FUNCTION::stat = 1;

int main()
{
    cout << STATIC_MEMBER_FUNCTION::staticFunction() << endl;
    
    STATIC_MEMBER_FUNCTION s1;
    cout << s1.staticFunction() << endl;

    cout << STATIC_MEMBER_FUNCTION::staticFunction() << endl;

    STATIC_MEMBER_FUNCTION s2;
    cout << s1.staticFunction() << endl;
}