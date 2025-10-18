// Variable, Data Types, Operators, Type Casting
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 3, age = 20;
    char grade = 'z';
    float price = 456.90;
    double range = 243.343223;
    bool isPositive = "True";

    int newGrade = grade;

    // size of data types (primitive)
    cout << (sizeof(age)) << endl;        // int
    cout << (sizeof(grade)) << endl;      // char
    cout << (sizeof(price)) << endl;      // float
    cout << (sizeof(range)) << endl;      // double
    cout << (sizeof(isPositive)) << endl; // bool

    // implicit type conversion
    cout << (newGrade) << endl;

    // without type casting ignore decimal values
    cout << (a / b) << endl;

    // explicit type casting
    cout << (a / (double)b) << endl;
    return 0;
}
