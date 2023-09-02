#include<iostream>
using namespace std;
/// Class
class house
{   //Private member variable
    private:
        int length = 0, breadth = 0;
    //Public member function
    public:
        void setData(int x, int y)
        {
            length = x;
            breadth = y;
        }

        void area()
        {
            cout << "Area of the house is : " << length*breadth;
        }
};
//Member variable share hoi but member variable alada alada vabe object er jonne create hoi.......
int main()
{
    house tara;
    tara.setData(20,30);
    tara.area();

    house hri;
    hri.setData(40,50);
    hri.area();
}