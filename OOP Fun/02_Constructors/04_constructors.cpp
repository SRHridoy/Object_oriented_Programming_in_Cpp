#include<iostream>
using namespace std;

class A
{
    private:
        int age;
    public:
    A(int x)
    {
        age = x;
    }
    int printData()
    {
        return age;
    }
};
//Constructor--> same name as class & don't return. 
//Reduce time and code length and unwanted function calls.
/*
    Why?
        Forgot to initialize
        When many objects
        Helps in initialize and allocate memory to data members.
*/
int main()
{
    A a_obj(25);
    cout << a_obj.printData();
}