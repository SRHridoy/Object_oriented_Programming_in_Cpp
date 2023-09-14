#include<iostream>
using namespace std;

class REVERSE_NAME
{
    string first_name;
    string last_name;

    public:
        REVERSE_NAME(string f = "Sohanur", string l = "Rahman")
        {
            first_name = f;
            last_name = l;
        }
        void printReverse();

};

void REVERSE_NAME::printReverse()
{
    cout << last_name << " " << first_name << endl;
}

int main()
{
    REVERSE_NAME n1;
    n1.printReverse();

    REVERSE_NAME n2("King","Kong");
    n2.printReverse();
}