/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
//Write a program to sort an array of integer using function pointer in descending order and resort this same array in ascending order using virtual function...
*/
#include <iostream>
#include <algorithm>
using namespace std;

class SORTING
{
protected:
    int *arr;
    int size;

public:
    SORTING() : arr(nullptr), size(0) {}

    void getArray()
    {
        cout << "\nEnter the size of the array: ";
        cin >> size;
        arr = new int[size];
        cout << "Enter the elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    virtual bool compare(int a, int b) = 0;

    static bool staticCompare(int a, int b, SORTING *obj)
    {
        return obj->compare(a, b);
    }

    void customSort()
    {
        // Custom sorting logic here
    }

    void displayArray()
    {
        cout << "Sorted array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~SORTING()
    {
        if (arr != nullptr)
        {
            delete[] arr;
        }
    }
};

class DescendingSorting : public SORTING
{
public:
    virtual bool compare(int a, int b)
    {
        return a > b; // Sort in descending order
    }

    void customSort()
    {
        std::sort(arr, arr + size, [this](int a, int b) {
            return staticCompare(a, b, this);
        });
    }
};

class AscendingSorting : public SORTING
{
public:
    virtual bool compare(int a, int b)
    {
        return a < b; // Sort in ascending order
    }

    void customSort()
    {
        std::sort(arr, arr + size, [this](int a, int b) {
            return staticCompare(a, b, this);
        });
    }
};

int main()
{
    DescendingSorting descendingSorter;
    AscendingSorting ascendingSorter;

    descendingSorter.getArray();
    descendingSorter.customSort();
    cout << "Descendingly Sorted array: ";
    descendingSorter.displayArray();

    ascendingSorter.getArray(); // Get a new array
    ascendingSorter.customSort();
    cout << "Ascendingly Sorted array: ";
    ascendingSorter.displayArray();

    return 0;
}


/*
#include <iostream>
#include <algorithm>
using namespace std;

bool descendingCompare(int a, int b) {
    return a > b; // Sort in descending order
}

bool ascendingCompare(int a, int b) {
    return a < b; // Sort in ascending order
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int* arr = new int[size];
    
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    // Sort in descending order
    sort(arr, arr + size, descendingCompare);
    
    cout << "Descendingly Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Sort in ascending order
    sort(arr, arr + size, ascendingCompare);
    
    cout << "Ascendingly Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr;
    
    return 0;
}

*/