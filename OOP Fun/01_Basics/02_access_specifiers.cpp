#include<iostream>
using namespace std;

class PARENT
{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
};

class CHILD:public PARENT
{
    //Parent er 
            //Private not accessible.
            //Protected can be inherited to one child.
            //Public can be inherited.
};

int main()
{

}