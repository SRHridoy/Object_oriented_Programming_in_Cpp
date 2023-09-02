/*
    Write a program, that takes phone details as input and store them in object & use Constructors.

    Phone Details :
    1.Name
    2.Ram
    3.Processor
    4.Battery
*/

#include <iostream>
using namespace std;

class PhoneDetails
{
    string name;
    int ram;
    string processor;
    int battery;

public:
    PhoneDetails(string n = "Vivo", int r = 8, string p = "Octa-core", int b = 5000)
    {
        name = n;
        ram = r;
        processor = p;
        battery = b;
    }

    PhoneDetails(PhoneDetails &mobile)
    {
        name = mobile.name;
        ram = mobile.ram;
        processor = mobile.processor;
        battery = mobile.battery;
    }

    void showDetails();
};

void PhoneDetails:: showDetails()
{

    cout << endl<< "Name : " << name << endl;
    cout << "Ram : " << ram << " GB " << endl;
    cout << "Processor : " << processor << endl;
    cout << "Battery : " << battery << " mAh " << endl;
}

int main()
{
    PhoneDetails vivo;

    PhoneDetails nokia("Nokia",16,"Snap-dragon", 5000);

    PhoneDetails noko(nokia);

    vivo.showDetails();
    nokia.showDetails();
    noko.showDetails();
}