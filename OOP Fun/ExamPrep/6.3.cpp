/*
6.3 A book shop maintains the inventory of books that are being
sold at the shop. The list includes details such as author, title,
price, publisher and stock position. Whenever a customer wants
a book, the sales person inputs the title and author and the
system searches the list and displays whether it is available or
not. If it is not, an appropriate message is displayed. If it is, then
the system displays the book details and requests for the
number of copies required. If the requested copies are available,
the total cost of the requested copies is displayed; otherwise the
message “Required copies not in stock” is displayed.
*/

#include<iostream>
using namespace std;

class BookShop
{
    private:
        string author_name[5];
        string tittle[5];
        int price[5];
        string publisher[5];
        int stock_position[5];
    
    public:
        BookShop();
        void setBook();
        void searchBookandDisplay();
        void copyAvailable();

};

void BookShop:: setBook()
{
    author_name[0] = "Bala Guru Swamy";
    author_name[1] = "Seymour Lipchutz";
    author_name[2]="Md.Tamim Shahriar Subin";
    author_name[3]="Md. Masud Rana";
    author_name[4] = "Humayun Azad";

    tittle[0] = "ANCI C";
    tittle[1] = "DSA in C";
    tittle[2] = "C Programming";
    tittle[3] = "Java Programming";
    tittle[4] = "Uro pakhi";

    price[0] = 100;
    price[1] = 105;
    price[2] = 110;
    price[3] = 130;
    price[4] = 110;

    publisher[0] = "Rangdhanu";
    publisher[1] = "Rang";
    publisher[2] = "Red";
    publisher[3] = "Okkhor";
    publisher[4] = "Bornomala";

    stock_position[0] = 5;
    stock_position[1] = 5;
    stock_position[2] = 5;
    stock_position[3] = 5;
    stock_position[4] = 5;

    
}

void BookShop:: searchBookandDisplay()
{

}

int main()
{
    BookShop b1;

    

}