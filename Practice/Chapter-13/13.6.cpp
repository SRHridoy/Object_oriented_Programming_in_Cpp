#include<iostream>
using namespace std;

void divide(double x, double y)
{
    cout << "\nInside function \n";
    try
    {
        if(y==0.0) throw y;
        else cout << "DIVISION = " << x/y << endl;

    }
    catch(double)
    {
        cout << "Caught double inside function\n";
        throw;
    }
    cout << "End of function\n";
}

int main()
{
    cout << "Inside main\n";
    try
    {
        divide(10.5,2.0);
        divide(20.0,0.0);
    }
    catch(double)
    {
        cout << "Caught double inside main\n";
    }
    cout << "End of main\n";
}