//When we make operators (+, -, *, /) work for user-defined types like objects and structures. This is known as operator overloading...


//Real Approach : 
#include<iostream>
using namespace std;

class RealOverloading
{
    private:
        int weight;

    public:
    RealOverloading(int w = 0)
    {
        weight = w;
    }

    RealOverloading operator +(RealOverloading PassedObj)
    {
        RealOverloading temp;
        temp.weight = weight + PassedObj.weight;
        return temp;
    }

    void show()
    {
        cout << weight << endl;
    }
};


int main()
{
    RealOverloading person1(69);
    RealOverloading person2(31);

    RealOverloading total;
    //total = person1.addWeight(person2);
    //total = person2.addWeight(person1);
    total = person1 + person2;
    

    total.show();
}