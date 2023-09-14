/*
    5.5Create two classes DM and DB which store the value of
distances. DMstores distances in metres and centimetres and DBin
feet and inches. Write a program that can read values for the class
objects and add one object of DMwith another object of DB..
Use a friend function to carry out the addition operation. The
object that stores the results may be a DM object or DB object,
depending on the units in which the results are required.
The display should be in the format of feet and inches or metres
and centimetres depending on the object on display.
*/

#include<iostream>
using namespace std;

class DB;
class DM
{
    private:
        float meter;
        float centimeter;
    public:
        DM(){}
        void setData();
        float getMeter() const { return meter;}
        float getCentimeter() const { return centimeter; }
        friend void convertion(DM dm, DB db,int choice);
};

void DM::setData()
{
    cout <<endl << "Enter the value of distance in Meter : ";
    cin >> meter;
    cout <<endl << "Enter the value of distance in Centimeter : ";
    cin >> centimeter;
}

class DB
{
    private:
        float feet;
        float inches;
    public:
        DB(){}
        void setData();
        float getFeet() const { return feet; }
        float getInches() const { return inches; }
        friend void convertion(DM dm, DB db,int choice);
};

void DB::setData()
{
    cout <<endl << "Enter the value of distance in Feet : ";
    cin >> feet;
    cout <<endl << "Enter the value of distance in Inches : ";
    cin >> inches;
}

void conversion(DM dm, DB db,int choice) {
    float SI = dm.getCentimeter() * 0.01 + dm.getMeter();
    float IM = db.getInches() / 12 + db.getFeet();

    float si_total = SI + IM / 0.3048;
    float im_total = IM + SI * 3.2808399;

    switch (choice)
    {
    case 1:
        cout << "Total distance in SI units: " << si_total << " meters" <<endl;
        break;
    case 2:
        cout << "Total distance in Imperial units: " << im_total << " feet" << endl;
        break;
    default:
        cout << "Invalid Input!" << endl;
        break;
    }

}

int main()
{
    DM dm;
    DB db;
    
    dm.setData();
    db.setData();

    int choice = 0;
    cout <<endl <<  "Which Conversion do you want ? " << endl;
    cout << "1.Meters & Centimeters to Feet & Inches." << endl;
    cout <<"2.Feet & Inches to Meters & Centimeters." << endl;
    cin >> choice;

    conversion(dm,db,choice);

}