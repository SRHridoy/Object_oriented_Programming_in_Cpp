/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
9.4 Using the concept of pointers write a function that swaps the
private data values of two objects of the same class type.
*/

#include<iostream>
using namespace std;

class MySwapClass
{
    int data;
    public:
        MySwapClass(int a = 0){data = a;}

        void swapData(MySwapClass *other)
        {
            int temp = this->data;
            this->data = other->data;
            other->data = temp;
        }

        void displayData()
        {
            cout << "Data : " << data << endl;
        }
};

int main()
{
    MySwapClass obj1(5);
    MySwapClass obj2(10);

    cout << "Before Swapping : " << endl;
    obj1.displayData();
    obj2.displayData();

    cout << "After Swaping : " << endl;
    obj1.swapData(&obj2);
    obj1.displayData();
    obj2.displayData();
}