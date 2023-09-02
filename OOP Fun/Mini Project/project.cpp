/*
Write a program showing ATM functionalities using OOP's
1. Check Balance
2. Cash WithDraw
3. User Details
4. Update Mobile No
*/
#include <iostream>
#include <string>
using namespace std;

class ATM
{
private:
    long int account_number;
    string name;
    int pin;
    double balance;
    string mobile_no;

public:
//Setter:
    void setData(long int account_no, string name_n,int pin_n,double balance_n, string mobile_no_n);

//Modify pin : 
    void setPin(int pin_prev, int pin_new);
//Cash withDraw :
    void cashWithDraw(int amount_a);
//Getters :
    long int getAccountNo();
    string getName();
    int getPin();
    double getBalance();
    string getMobileNo();
};
//Setter function defination: 
void ATM::setData(long int account_no, string name_n, int pin_n, double balance_n, string mobile_no_n)

{
    account_number = account_no;
    name = name_n;
    pin = pin_n;
    balance = balance_n;
    mobile_no = mobile_no_n;
}
//Getter function definations : 
long int ATM::getAccountNo(){return account_number;}
string ATM::getName(){return name;}
int ATM::getPin(){return pin;}
double ATM::getBalance(){return balance;};
string ATM::getMobileNo(){return mobile_no;};

//setPin is Updating the user PIN no: 
void ATM:: setPin(int pin_prev,int pin_new)
{
    if(pin_prev==pin)
    {
        pin = pin_new;
        cout << endl << "Successfully Pin is Updated!" << endl;
    }
    else
    {
        cout << endl << "Old PIN doesn't match! Try again." << endl;
    }
}

//Cash Withdraw function is used to withdraw money from ATM:
void ATM :: cashWithDraw(int amount_a)
{
    if (amount_a>0 and amount_a <= balance)
    {
        balance -= amount_a;
        cout << endl << "Please Collect Your Cash.";
        cout << endl <<"Now, your Available Balance is : " << balance;
    }
    else
    {
        cout << endl <<"Invalid Input or Insufficient Balance!";
    }
}



int main()
{
    int choice = 0;
    int enterPin;
    long int enterAccountNo;


    ATM user1;
    user1.setData(12345,"Md Sohanur Rahman Hridoy",2003, 50000,"01724611873");

    do
    {
        
        cout << endl << "********Welcome to ATM********" << endl;
        cout << endl << "Enter Your Account No. : ";
        cin >> enterAccountNo;

        cout << endl << "Enter Your PIN : ";
        cin >> enterPin;

        if((enterAccountNo==user1.getAccountNo()) &&(enterPin==user1.getPin()))
        {
            do
            {
                int amount = 0;
                int oldP,newP;

                cout << endl << "********Welcome to ATM********" << endl;
                cout << endl<<"Select Options : ";
                cout << endl <<"1. Check Balance.";
                cout << endl << "2.Cash Withdraw.";
                cout << endl <<"3. Show User Details.";
                cout << endl << "4. Change your PIN.";
                cout << endl << "5. Exit"<< endl;
                cin >> choice;

                switch(choice)
                {
                    case 1:
                        cout << endl << "Your Bank Balance is  :" << user1.getBalance();
                        break;
                    case 2:
                        cout << endl << "Enter the amount : ";
                        cin >> amount;
                        user1.cashWithDraw(amount);
                        break;
                    case 3:
                        cout << endl << "******** USER DETAILS********";
                        cout << endl <<"->Account No. : " << user1.getAccountNo();
                        cout << endl <<"->Name : " << user1.getName();
                        cout <<endl <<"->Balance :" << user1.getBalance();
                        cout << endl <<"->Mobile No. : " << user1.getMobileNo();
                        break;
                        
                    case 4:
                        cout << endl << "Enter the Old PIN : ";
                        cin >> oldP;
                        cout << endl << "Enter the New PIN : ";
                        cin >> newP;

                        user1.setPin(oldP,newP);
                        break;
                    case 5:
                        exit(0);
                    default:
                        cout <<endl <<"Enter Valid Data !";
                }

            }while(true);
            
        }
        else
        {
            cout << endl <<"Your Account No. Or PIN is Incorrect !" << endl;
            
        }

    }while(true);
    
    
}