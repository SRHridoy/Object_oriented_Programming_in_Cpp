#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a and b  : ";
    cin >> a >> b;
    int x = a-b;
    try
    {
        if(x!=0)
        {
            cout << "Result("<<a<<"/"<<x<<") = " << a/x << endl;
        }
        else
        {
            throw(x);
        }
    }
    catch(int)
    {
        cout << "Exception Caught : DIVIDE BY ZERO" << endl;
    }
    
}