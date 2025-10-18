#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Calculated : " << (a + b) << endl
         << endl;
}
void sub(int a, int b)
{
    cout << "Calculated : " << (a - b) << endl
         << endl;
}
void multiply(int a, int b)
{
    cout << "Calculated : " << (a * b) << endl
         << endl;
}
void divide(int a, int b)
{
    if (a == 0 || b == 0)
    {
        cout << "Division by zero error" << endl
             << endl;
    }
    else
    {
        cout << "Calculated : " << (a / b) << endl
             << endl;
    }
}
void mod(int a, int b)
{
    if (b == 0)
    {
        cout << "Division by zero error" << endl
             << endl;
    }
    else
    {
        cout << "Calculated : " << (a % b) << endl
             << endl;
    }
}
int main()
{
    int num1, num2;
    char symbol;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Choose operator (+, -, x, /, %) : ";
    cin >> symbol;
    cout << "Enter second number : ";
    cin >> num2;

    switch (symbol)
    {
    case '+':
        add(num1, num2);
        break;
    case '-':
        sub(num1, num2);
        break;
    case 'x':
        multiply(num1, num2);
        break;
    case '/':
        divide(num1, num2);
        break;
    case '%':
        mod(num1, num2);
        break;
    default:
        cout << "Invalid operator";
    }
    return 0;
}