/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
Comprare two fractional number by overloading  the relational operator(==,!=,<= and >=);
*/
#include<iostream>
using namespace std;

class CompareOverloading
{
private:
    int numerator;
    int denominator;

public:
    CompareOverloading(int num = 1, int den = 1)
    {
        numerator = num;
        denominator = den;
    }

    bool operator==(CompareOverloading& other)
    {
        // Compare fractions for equality
        return (numerator * other.denominator == other.numerator * denominator);
    }

    bool operator!=( CompareOverloading& other)
    {
        // Compare fractions for inequality
        return (numerator * other.denominator != other.numerator * denominator);
    }

    bool operator<=( CompareOverloading& other)
    {
        // Compare fractions for less than or equal to
        return (numerator * other.denominator <= other.numerator * denominator);
    }

    bool operator>=( CompareOverloading& other)
    {
        // Compare fractions for greater than or equal to
        return (numerator * other.denominator >= other.numerator * denominator);
    }

    void display()
    {
        cout << numerator << "/" << denominator;
    }
};

int main()
{
    CompareOverloading fraction1(3, 3);
    CompareOverloading fraction2(3, 3);

    cout << "Fraction 1: ";
    fraction1.display();
    cout << endl;

    cout << "Fraction 2: ";
    fraction2.display();
    cout << endl;

    // Compare fractions
    if (fraction1 == fraction2)
        cout << "Fraction 1 is equal to Fraction 2." << endl;
    else
        cout << "Fraction 1 is not equal to Fraction 2." << endl;

    if (fraction1 != fraction2)
        cout << "Fraction 1 is not equal to Fraction 2." << endl;
    else
        cout << "Fraction 1 is equal to Fraction 2." << endl;

    if (fraction1 <= fraction2)
        cout << "Fraction 1 is less than or equal to Fraction 2." << endl;
    else
        cout << "Fraction 1 is greater than Fraction 2." << endl;

    if (fraction1 >= fraction2)
        cout << "Fraction 1 is greater than or equal to Fraction 2." << endl;
    else
        cout << "Fraction 1 is less than Fraction 2." << endl;

    return 0;
}
