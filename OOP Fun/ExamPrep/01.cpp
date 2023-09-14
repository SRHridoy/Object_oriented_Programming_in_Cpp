#include <iostream>
using namespace std;

class MYSTERY
{
private:
    int a = 5, b = 4, c = 2, d = 7;

public:
    void printSeries()
    {   cout << "Print a mystery series : " << endl << "________________________" << endl <<"The series are : " << endl;
        cout << a << " " << b << " " << c << " " << d << " ";
        for (int i = 0; i < 7; i++)
        {
            a += 6;
            b += 6;
            c += 6;
            d += 6;
            cout << a << " " << b << " " << c << " " << d << " ";
        }
    }
};

int main()
{
    MYSTERY m1;
    m1.printSeries();
}