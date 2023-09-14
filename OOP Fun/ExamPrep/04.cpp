#include<iostream>
using namespace std;

class Student
{
    private:
        string name;
        string cls;
        int roll_number;
        float marks;
    public:
        Student(string n = "Hridoy", string c = "CSE-201", int r = 2102002, float m = 80 )
        {
            name = n;
            cls = c;
            roll_number = r;
            marks = m;
        }
        float grade();
        void displayGrade();
};

float Student::grade()
{
    float cgpa = 2.00;
    if(marks>=80 and marks <=100)
    {
        cgpa = 4.00;
    }else if(marks>=75 and marks <=79)
    {
        cgpa = 3.5;
    }else if (marks>=70 and marks<=74)
    {
        cgpa = 3;
    }else{
        cgpa = 2.5;
    }
    return cgpa;
}

void Student::displayGrade()
{
    cout << "Name : " << name << endl;
    cout << "Class : " << cls << endl;
    cout << "Roll Number : " << roll_number << endl;
    cout << "Marks : " << marks <<endl;
    float cg = grade();
    cout << "The cgpa is : " << cg << endl;
}


int main()
{
    Student s1;
    s1.displayGrade();

    Student s2("Razzak","CSE-201",2102042,79);
    s2.displayGrade();

}