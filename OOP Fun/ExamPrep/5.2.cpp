/*
5.2 Write a class to represent a vector (a series of float values).
Include member functions to perform the following tasks:
(a) To create the vector
(b)To modify the value of a given element
(c) To multiply by a scalar value
(d) To display the vector in the form (10,20, 30, ...)Write a program to test your class.
*/

#include<iostream>
using namespace std;

class VECTOR
{
    float f,s,t;
    public:
        void createVector(float x, float y, float z)
        {
            f = x;
            s = y;
            t = z;
        }
        void modify()
        {
            float x,y,z;
            cout << "Enter in the three coefficient of i,j,k : " << endl;
            cin >> x >> y >> z;
            f = x;
            s = y;
            t = z;
            cout << "Successfully Modified!" << endl;
        }
        VECTOR operator *(float m)
        {
            VECTOR ans;
            ans.f  = f * m;
            ans.s  = s * m;
            ans.t  = t * m;

            return ans;
        }

        void printVector()
        {
            cout << "(" << f <<", "<<s<<", "<< t<<")" << endl;
        }


};

int main()
{
    VECTOR v;
    int x,y,z;
    cout << "Enter the three coefficient of i,j,k : " << endl;
    cin >> x >> y >> z;
    v.createVector(x,y,z);

    int choice = 0;
    cout << "Do you want to modify vector :" << endl;
    cout << "1.Yes" << endl << "2. No" << endl;
    cin >> choice;
    if(choice == 1)
    {
        v.modify();
    }else if(choice == 2){
        cout << "Ok unchanged!" << endl;
    }else{
        cout << "Invalid Input!" << endl;
    }
    VECTOR mul;
    int f=1;
    cout << "Enter the scalar factor to multiply with the vector : " << endl;
    cin >> f;
    mul = v*f;
    mul.printVector();
}