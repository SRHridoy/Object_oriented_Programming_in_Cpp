#include<iostream>
using namespace std;

class PERSON
{
    string name;
    int age;
    float height;

    public:
        // PERSON()
        // {
        //     name = "Hridoy";
        //     age = 22;
        //     height = 00;
        // }

/*_____________________Instead of creating seperate default constructor we can assign the values to the parameterized constructor____________________*/
        PERSON(string name_p = "Hridoy", int age_p = 22, int height_p = 00)
        {
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