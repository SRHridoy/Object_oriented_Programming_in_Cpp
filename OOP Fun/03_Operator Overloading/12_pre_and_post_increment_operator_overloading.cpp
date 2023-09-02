#include <iostream>
using namespace std;

class PreAndPostIncrementOverloading
{
    private:
        int bonus;
        
    public:

        PreAndPostIncrementOverloading(int b = 0)
        {
            bonus = b;
        }
        void Show()
        {
            cout << "Bonus is : " << bonus << endl;
        }

//For pre-increment:
        void operator ++()
        {
            ++bonus;
        }
//For post-increment : to differentiate this two we pass int ...
        void operator ++(int)
        {
            bonus++;
        }

//Overloading - : 
        PreAndPostIncrementOverloading operator -(PreAndPostIncrementOverloading Passed)
        {
            PreAndPostIncrementOverloading temp;
            temp.bonus = bonus - Passed.bonus;
            return temp;
        }

};

int main()
{   
    PreAndPostIncrementOverloading Teacher(50);

    ++Teacher;
    Teacher.Show();

    Teacher++;
    Teacher.Show();

    PreAndPostIncrementOverloading police(20), Substraction;

    //Substraction = (++Teacher)-(police++); WHY???
    Substraction =Teacher - police;
    Substraction.Show();
}