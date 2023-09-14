/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
9.1 Create a base class called shape. Use this class to store two
double type values that could be used to compute the area of
figures. Derive two specific classes called triangle and
rectangle from the base shape. Add to the base class, a
member function get_data( ) to initialize base class data
members and another member function display_area( ) to
compute and display the area of figures. Make display_area( )
as a virtual function and redefine this function in the derived
classes to suit their requirements.
Using these three classes, design a program that will accept
dimensions of a triangle or a rect angle interactively, and
display the area.
Remember the two values given as input will be treated as
lengths of two sides in the case of rectangles, and as base
and height in the case of triangles, and used as follows:
Area of rectangle = x * y
Area of triangle = 1/2 * x * y
*/
#include<iostream>
using namespace std;

class shape
{
    protected:
        double l, b;
    public:
    void get_data(double x, double y)
    {
        l = x;
        b = y;
    }

    virtual void display_area()
    {
        cout << "The area  of the triangle is : " <<.5*l*b << endl;
        cout <<"The area of the rectangle is : " << l*b << endl;
    }
};

class triangle : public shape
{
    public:
        void display_area()
        {
            cout << "The Area of the Triangle is : " << .5*l*b << endl;
        }
};


class rectangle : public shape
{
    public:
        void display_area()
        {
            cout << "The Area of the Rectangle is : " << l*b << endl;
        }
};

int main()
{
    int choice;
    double x, y;

    cout << "choose a shape : " << endl;
    cout << "1.Triangle" << endl;
    cout << "2.Rectangel" << endl;
    cout << "Enter your choice(1 or 2): ";
    cin >> choice;

    shape *ptr;
    switch (choice)
    {
    case 1:
        ptr = new triangle();
        break;
    case 2:
        ptr = new rectangle();
        break;
    default:
        cout << "Invalid choice.." << endl;
        return 1;
    }

    cout << "Enter the value of l and b : ";
    cin >> x >> y;

    ptr->get_data(x,y);
    ptr->display_area();

    delete ptr;
}