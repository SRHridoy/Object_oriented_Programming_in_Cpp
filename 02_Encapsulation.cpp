#include<iostream>
using namespace std;

class Employee{
private:
    string Name;
    string Company;
    int Age;

public:
    //Getters ---->
    void setName(string name){
        Name =  name;
    }
    //Setters---->
    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }

    void setAge(int age){
        if(age>=18)
            Age = age;
    }
    int getAge(){
        return Age;
    }

    void introduceYourself(){
        cout<<"Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1=Employee("Hridoy", "CSE-GIST", 22);
    employee1.introduceYourself();

    
    Employee employee2=Employee("Rupa","RannaBanna", 25);
    employee2.introduceYourself();

    employee1.setAge(40);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

}