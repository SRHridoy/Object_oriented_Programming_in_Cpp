/*
7.4 Define a class String. Use overloaded == operator to compare
two strings.
*/

#include <iostream>
using namespace std;

class String
{
private:
    string s;

public:
    String(string x) { s = x; }
    bool operator==(String &str)
    {
        int l1 = 0, l2 = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            l1++;
        }
        for (int i = 0; str.s[i] != '\0'; i++)
        {
            l2++;
        }

        if (l1 != l2)
        {
            return false;
        }
        for (int i = 0; i < l1; i++)
        {
            if (s[i] != str.s[i])
            {
                return false;
            }
        }
        return true;
    }

    void check(bool c)
    {
        switch (c)
        {
        case false:
            cout << "The strings are not equal" << endl;
            break;
        case true:
            cout << "The strings are equal" << endl;
            break;
        default:
            cout << "Error ..." << endl;
            break;
        }
    }
};

int main()
{
    String s1("Hri");
    String s2("Hri");
    bool check1 = s1 == s2;
    s1.check(check1);

    String s3("Hri");
    String s4("doy");
    bool check2 = s1 == s2;
    s3.check(check2);
}