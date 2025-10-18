#include <iostream>
using namespace std;
int main()
{
    int marks;
    char grade;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90)
    {
        grade = 'A';
    }
    else if (marks >= 80 && marks < 90)
    {
        grade = 'B';
    }
    else if (marks >= 70 && marks < 80)
    {
        grade = 'C';
    }
    else if (marks >= 60 && marks < 70)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    cout << "your grade : " << grade << endl;

    return 0;
}