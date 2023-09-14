/*
6.2 Define a class Stringthat could work as a user-defined string
type. Include constructors that will enable us to create an
uninitialized string
String s1; // string with length 0
and also to initialize an object with a string constant at the time of
creation like
String s2(“Well done!”);Include a function that adds two strings to make a third string.
Note that the statement
s2 = s1;
will be perfectly reasonable expression to copy one string to
another.
Write a complete program to test your class to see that it does the
following tasks:
(a) Creates uninitialized string objects.
(b) Creates objects with string constants.
(c) Concatenates two strings properly.
(d) Displays a desired string object.
*/

#include<iostream>
using namespace std;

class String
{
    private:
        string s;
    public:
        String(){}
        String(string s1){s=s1;}
        String Concate(String &x);
        void display();
};

String String::Concate(String &x)
{
    String ans;
    ans.s = s + x.s;
    return ans;
}

void String :: display()
{
    cout << "String is : " << s << endl;
}

int main()
{
    String s1;
    s1.display();
    String s2("Hri");
    String s3("doy");

    String ans;
    ans = s2.Concate(s3);
    ans.display();
}