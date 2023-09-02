#include<iostream>
using namespace std;

class RECTANGLE{
    public:
        int length;
        int breadth;

        void area()
        {
            cout << "Area of Rectangle is : " << length * breadth << endl;
        }
};

class CUBOID : public RECTANGLE{
    public: 
        int height;

        void volume(){

            cout << "Volume of Cuboid is : " << length*breadth*height << endl;
        }
};

int main()
{
    CUBOID c;
    c.length = 10;
    c.breadth = 20;
    c.height = 30;

    c.area();
    c.volume();
}