#include<iostream>
using namespace std;

class PERSON
{
    string name;
    int age;
    float height;

    public:
        PERSON()
        {
            name = "Hridoy";
            age = 22;
            height = 00;
        }
        PERSON(string name_p, int age_p, int height_p)
        {
            //Same name dile vejal hobe.
            //kaj hobe nah...
            name = name_p;
            age = age_p;
            height = height_p;
        }

        void printData()
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Heigt : " << height << endl;
        }


};

int main()
{
    PERSON person01;
    person01.printData();

    PERSON person02("Nova", 18, 00);
    person02.printData();
}