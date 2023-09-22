#include<iostream>
#include<string.h>
using namespace std;

class Error
{
    private:
        int err_code;
        char *err_desc;
    public:
        Error(int c,const char *d)
        {
            err_code = c;
            err_desc = new char[strlen(d)+1];
            strcpy(err_desc,d);
        }

        void err_display()
        {
            cout << "\nError" << err_code << endl << "Error Description : " << err_desc;
        }

};

int main()
{
    try
    {
        cout <<"Press any key to throw a test exception." << endl;
        throw Error(404,"Internet Connection Lost!");
    }
    catch(Error e)
    {
        cout << "\nException Caught Successfully...";
        e.err_display();
    }
    
}