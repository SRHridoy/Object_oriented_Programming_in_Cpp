# What is OOP?
* OOP is a programming paradigm which means that it is a set of rules of ideas and concepts, it is a standard in programming that we use to solve a specific type of problem.
    * Besides the OOP paradigm, there are also other programming paradigms. They have particular uses.
# Why OOP?
    * The idea behind the OOP paradigm is we want to be able to represent real-life objects and entities together with their characteristics, their attributes and their behavior.

    * We want to be able to explain those objects to our computer and to represent those objects in our program and that is exactly what OOP is used for.

## For Example Car:
> How can we represent Car from real-life to program.

We can represent a real-life entity like a car, a game or a spot or a student or a book or an animal in our program by using **Class**.

### Class:
    Class is a building block of OOP and a user-defined data type.

# Basic Syntax of class:
```c++
class className{

    //Attributes or anything

};
```
>### Example of an Employee Class:

```c++
class Employee{
    string Name;
    string Company;
    int Age;
};
```
* This Employee Class here doesn't represent data this class here represents a blueprint or a model.
Declaring Employee as variable or creating an Object:

```c++
int main()
{
    Employee employee1;
    
}
```

## Accessing the attributes and members of the employee class:

```c++
int main()
{
    Employee employee1;
    employee1.
    //By placing dot(.) after employee1 we should e able to see all of these members here but that is not happening but WHY???
}
```

## Why?
> Because "Every thing inside class in C++ is **Private** by default which means that all of these members here are private.

## Access Modifiers in C++:

* Private
    * means that whatever is private in your class that is not going to be accessible outside of your class is going to be hidden.
* Public
    * means that whatever is public in your class, you will be able to access outside of your class
* Protected
    * in between private and public and it has certain rules.

By Changing the modifier to **public** we can access the members of the class:
```c++
class Employee{
public:
    string Name;
    string Company;
    int Age;
};
```

### Setting values :
```c++
int main()
{
    Employee employee1;
    employee1.Name = "Hridoy";
    employee1.Company ="CSE-GIST";
    employee1.Age = 22;
}
```

## How can we describe the behavior of an Employee?
What is **Class-Method**?
It is a function.

## Creating a function:
```c++
class Employee{
public:
    string Name;
    string Company;
    int Age;

    void introduceYourself(){
        cout<<"Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};
```

### Calling(invoking) the function:

```c++
employee1.introduceYoureself();
```

### Creating another employee object:

```c++
int main()
{
    Employee employee1;
    employee1.Name = "Hridoy";
    employee1.Company ="CSE-GIST";
    employee1.Age = 22;

    employee1.introduceYourself();

    Employee employee2;
    employee2.Name = "Rupa";
    employee2.Company = "RannaBanna";
    employee2.Age = 25;

    employee2.introduceYourself();
}
```

>If we have 10 more or 100 more employee, then we would have to repeat this for every single user that we create.
* This is not an optimal way. There is a better way of **constructing** our objects.

* So then we have to learn about **Constructors**.


### Constructor :
* It is a special type of method that is invoked each time an object of a class is created.

* So, whenever you create an object of a class a constructor is invoked.

### Default Constructor :

A default constructor is a constructor that either has no parameters or if it has parameters, all the parameters have default values.

>## Rules of creating Constructor :

1. A constructor is just a method unlike other methods, a constructor doesn't have a return type.

2. A constructor has the same name as the class that it belongs to.

3. A constructor must be public.


## Creating Constructor :

```c++
class Employee{
public:
    string Name;
    string Company;
    int Age;

    void introduceYourself(){
        cout<<"Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
//Constructor----> 
    Employee(){

        //The job of this   constructor is to construct the object of employee..

    }
};
```

### Adding arguments in the constructor :

```c++
Employee(string name, string company, int age){
    
    Name = name;
    Company = company;
    Age = age;
    }
```

### After this, we face an error :

> `no default constructor exists for class "Employee" C/C++(291)`

    When we create our own Constructor at that moment we lost the default constructor that was automatically created.

### Solution : 

Now we have to provide the arguments that we have specified for our constructor going to receive.

## Instead of the code below, we can write ---->
1. ~~Employee employee1;
    employee1.Name = "Hridoy";
    employee1.Company ="CSE-GIST";
    employee1.Age = 22;~~

```c++
Employee employee1=Employee("Hridoy", "CSE-GIST", 22);
```

2. ~~Employee employee2;
    employee2.Name = "Rupa";
    employee2.Company = "RannaBanna";
    employee2.Age = 25;~~

```c++
Employee employee2=Employee("Rupa","RannaBanna", 25);
```

### Here goes the Code : 
```c++
int main()
{
    Employee employee1=Employee("Hridoy", "CSE-GIST", 22);
    employee1.introduceYourself();

    
    Employee employee2=Employee("Rupa","RannaBanna", 25);
    employee2.introduceYourself();
}
```

Now, We had only two lines per employee in our main function.

## Building Blocks Of Object-oriented Programming :
1. **Encapsulation**
2. **Abstraction**
3. **Inheritance**
4. **Polymorphism**

>### Encapsulation :
* Bundling or tying data and methods together that operate on that data so that they are grouped within a class.

## Why do we do this?

* We do this to prevent anyone or anything outside of our class to be able to directly access our data intact with it and to modify it.

* We don't want that other class to be able to **directly** modify and change and interact with our data because we want to provide our way for that to do that.

### How can we do that?

We provide very specific public functions that other classes can invoke and in that way interact with my data.

## How do we access encapsulated properties of a class
* Through its methods.
    * These methods are very often implemented as **getters** and **setters**.

>###  Getters and Setters :

```c++
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
```
We can also validate or give special rules to interact with data. Such as :

```c++
void setAge(int age){
        if(age>=18)
            Age = age;
    }
```

If the condition isn't satisfied, then the value can't be set.

`Conclusion: The idea of encapsulation is to make the properties private and whoever wants to access these properties outside the class will have to go through the methods that we expose to have access to our private properties`

<br><br>

># Abstruction:
    Abstraction means hiding complex things behind a procedure that makes those things simple.

This simply means hiding complexity.

># Creating Abstruction: 
```c++
class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
```


># Singing up to abract class :
```c++
class Employee:AbstractEmployee{
    public:
        void AskForPromotion(){
        if(Age>30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " , sorry NO promotion for you!" << endl;
        }
};
```

> Full code for abstraction : 

```c++
#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name){
        Name =  name;
    }
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

    void AskForPromotion(){
        if(Age>30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " , sorry NO promotion for you!" << endl;
    }
};

int main()
{
    Employee employee1=Employee("Hridoy", "CSE-GIST", 22);
    Employee employee2=Employee("Rupa","RannaBanna", 31);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}
```

<br><br>

># Inheritance : 

Syntax :
```cpp
class Developer:Employee{
    
};
```

`Here, Developer is a Child Class(Derived Class, Subclass) and Employee is a Parent Class(Super Class, Base Class).`

Now, Developer has the all properties of the Employee class.









