//Copy constructor are used for creating new objects from existing object.
#include<iostream>
using namespace std;

class MOVIES
{
    private:
        int watched;
    public:
    //Parameterized constructor :
        MOVIES(int x)
        {
            watched = x;
        }
    //Copy Constructor :
        MOVIES(MOVIES &obj)
        {
            //this->watched = obj.watched;
            watched = obj.watched;
        }

        void showWatchted()
        {
            cout  << watched << endl;
        }

};

int main()
{
    MOVIES thriller(20);//Parameterized Constructor is invoked.
    MOVIES horror(thriller);//Copy Constructor is invoked.

    horror.showWatchted();
}