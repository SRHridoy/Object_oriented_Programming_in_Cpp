#include<iostream>
using namespace std;

class Complex
{
    public:
        int real;
        int img;
    Complex(int x = 0, int y = 0)
    {
        real = x;
        img = y;
    }

    Complex operator +(Complex &c)
    {
        //Complex ans(0,0);//no need because we overload our constructor...
        Complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main()
{
    Complex c1(2,3);
    Complex c2(3,2);
    
    //Operator er por je object thakbe seta pass hobe
    //In this case c2 passed...
    Complex c3 = c1+c2;
    cout << c3.real << "+" <<c3.img << "i" << endl;

}