//Write a program to perform mathematical operations on complex numbers using unary and binary operator overloading...
#include<iostream>
using namespace std;

class Complex
{
    float real,img;
    public:
        Complex(int x = 0, int y = 0)
        {
            real = x;
            img = y;
        }
//Basic Operator overloading : 
        Complex operator +(Complex &c)
        {
            Complex sum;
            sum.real = real+c.real;
            sum.img = img+c.img;
            return sum;
        }
        Complex operator -(Complex &c)
        {
            Complex sub;
            sub.real = real-c.real;
            sub.img = img-c.img;
            return sub;
        }
        Complex operator *(Complex &c)
        {
            Complex mul;
            mul.real = real*c.real;
            mul.img = img*c.img;
            return mul;
        }
        Complex operator /(Complex &c)
        {
            Complex div;
            div.real = real/c.real;
            div.img = img/c.img;
            return div;
        }

//Unary Operator Overloading :
        void operator++()
        {
            real++;
            img++;
        }

        void operator++(int)
        {
            ++real;
            ++img;
        }

        void operator--()
        {
            real--;
            img--;
        }

        void operator--(int)
        {
            --real;
            --img;
        }

        void display();


};

void Complex::display()
{
    cout << "Real part  = " <<real << " Imaginary part = " << img << endl;
}

int main()
{
    Complex c1(2,5);
    Complex c2(5,2);

    Complex sum;
    sum = c1+c2;
    sum.display();

    Complex sub;
    sub = c1-c2;
    sub.display();

    Complex mul;
    mul = c1*c2;
    mul.display();

    Complex div;
    div = c1/c2;
    div.display();

//Unary Operators : 
    c1++;
    c1.display();

    ++c2;
    c2.display();

    mul--;
    mul.display();

    --mul;
    mul.display();

}