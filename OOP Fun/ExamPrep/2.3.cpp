/*
2.3 Write a program that inputs a character from keyboard and
displays its corresponding ASCII value on the screen.
*/

#include<iostream>
using namespace std;

class ASCII
{
    char character;
    public:
        void charInput();
        void asciiNum();
};

void ASCII :: charInput()
{
    cout << "Enter a character to convert into ASCII : " << endl;
    cin >> character;
}

void ASCII :: asciiNum()
{
    cout << "The ASCII value is  : ";
    cout << int(character) << endl;
}



int main()
{
    ASCII a1;
    a1.charInput();
    a1.asciiNum();
}