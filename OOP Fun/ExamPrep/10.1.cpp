/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
10.1 Write a program to read a list containing item name, item code, and cost interactively and produce a three column output as shown below.
Note that the name and code are left-justified and the cost is right-justified with a precision of two digits. Trailing zeros are shown
*/
#include <iostream> // Include the input/output stream library.
#include <iomanip>  // Include the input/output manipulation library for formatting.
#include <cstring>  // Include the string library for string operations.
using namespace std;

class item
{
    char name[40]; // Character array to store the item name.
    int code;      // Integer to store the item code.
    float cost;    // Floating-point number to store the cost of the item.

public:
    void get_data(char *n, int c, float co)
    {
        strcpy(name, n); // Copy the item name to the 'name' member.
        code = c;        // Set the item code.
        cost = co;       // Set the cost of the item.
    }

    void display()
    {
        cout.precision(2);                       // Set the precision for floating-point numbers to 2 decimal places.
        cout.setf(ios::fixed, ios::floatfield);  // Set the floating-point output to fixed notation with 2 decimal places.
        cout.setf(ios::showpoint);               // Show the decimal point and trailing zeros.
        cout.setf(ios::left, ios::adjustfield);  // Left-justify the 'name' and 'code' columns.
        cout << setw(40) << name << code;        // Output the name and code with proper formatting.
        cout.setf(ios::right, ios::adjustfield); // Right-justify the 'cost' column.
        cout << setw(15) << cost << endl;        // Output the cost with proper formatting and a new line.
    }
};

int main()
{
    item a[5]; // Create an array of 5 'item' objects.

    // Initialize the 'item' objects with sample data.
    a[0].get_data("Tarbo C++", 1001, 250.95);
    a[1].get_data("C Primer", 905, 95.7);
    a[2].get_data("algorithm", 1111, 120.5);
    a[3].get_data("Principle of electronics", 2220, 150.85);
    a[4].get_data("Solution of balaguruswamy", 6666, 145.00);

    // Output column headers.
    cout << setw(10) << "name" << setw(34) << "code" << setw(15) << "cost" << endl;

    // Output a line of dashes for separation.
    for (int i = 0; i < 60; i++)
        cout << "-";
    cout << endl;

    // Call the 'display' function for each 'item' object to display the data.
    for (int i = 0; i < 5; i++)
        a[i].display();

    return 0; // Return 0 to indicate successful program execution.
}
