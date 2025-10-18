#include <iostream>
using namespace std;
int sumOfNumber(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    cout << "Sum of natural numbers up to " << n << " = " << sumOfNumber(n) << endl
         << endl;
    return 0;
}