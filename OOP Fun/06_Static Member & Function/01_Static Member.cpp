//Each Object will create seperate copy of itselg in memory.

//Static member never reserve seperate space in memory...It only occupies space once and the space is used by all this objects...So, static member variable is common to all classes...

/*
(i)Static member would be allocated memory only once.
(ii)And that memory is shared by both the objects.
(iii)Static Data members belong a class & common to all objects...we need to delclare this in outside as int STATIC::stat = 0;(need global declaration)
*/

#include<iostream>
using namespace std;

class STATIC
{
    private:
        int a;
        int b;
    public:
        STATIC()
        {
            a = 5;
            b = 5;
            stat++;
        }
        static int stat;
};

int STATIC :: stat = 7;

int main()
{
    STATIC s1;
    cout << s1.stat << endl;
    STATIC s2;
    cout << s2.stat << endl;
    //As static member belongs to a class so : 
    cout << STATIC::stat;
}
