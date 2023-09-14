/*
8.5 Consider a class network of Fig. 8.15. The class master derives
information from both account and admin classes which in turn
derive information from the class person. Define all the four
classes and write a program to create, update and display the
information contained in master objects.
*/

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int code;
};

class Account : virtual public Person
{
protected:
    int pay;
};

class Admin : virtual public Person
{
protected:
    string experience;
};

class Master : public Account, public Admin
{
public:
    Master(string n = "Rashed Sir", int c = 201, int p = 0, string ex = "Strong")
    {
        name = n;
        code = c;
        pay = p;
        experience = ex;
    }


    void setData()
    {
        string n, ex;
        int c, p;
        cout << "Enter the name : ";
        cin >> n;
        cout << "Enter the code : ";
        cin >> c;
        cout << "Enter the amount of payment : ";
        cin >> p;
        cout << "Enter the Experience Level : ";
        cin >> ex;
        name = n;
        code = c;
        pay = p;
        experience = ex;
    }
    void Update()
    {
        string n, ex;
        int c, p;
        cout << "Enter the name : ";
        cin >> n;
        cout << "Enter the code : ";
        cin >> c;
        cout << "Enter the amount of payment : ";
        cin >> p;
        cout << "Enter the Experience Level : ";
        cin >> ex;

        name = n;
        code = c;
        pay = p;
        experience = ex;
        cout << endl<< "Successfully Updated!" << endl;
    }

    void display()
    {
        cout <<endl << endl <<  "Name : " << name << endl;
        cout << "Code : " << code << endl;
        cout << "Pay : " << pay << endl;
        cout << "Experience : " << experience << endl << endl;
    }
};

int main()
{

    Master m1;
    m1.setData();
    m1.display();

    int choice = 0;
    do
    {
        cout << "Do you want to update data : " << endl;
        cout << "1.Yes" << endl;
        cout << "2.Show" << endl;
        cin >> choice;
        if (choice == 1)
        {
            m1.Update();
        }
        else if (choice == 2)
        {
            m1.display();
        }

    } while (true);
}