//When we make operators (+, -, *, /) work for user-defined types like objects and structures. This is known as operator overloading...


//Traditional Approach : 
#include<iostream>
using namespace std;

class TraditionalOverloading
{
    private:
        int weight;

    public:
    TraditionalOverloading(int w = 0)
    {
        weight = w;
    }

    TraditionalOverloading addWeight(TraditionalOverloading PassedObj)
    {
        TraditionalOverloading temp;
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
    TraditionalOverloading person1(69);
    TraditionalOverloading person2(31);

    TraditionalOverloading total;
    //total = person1.addWeight(person2);
    total = person2.addWeight(person1);

    total.show();
}