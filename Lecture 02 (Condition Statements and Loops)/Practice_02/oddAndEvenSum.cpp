#include <iostream>
using namespace std;
int main()
{
    int sumOdd = 0, sumEven = 0, n;
    cout << "Enter value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sumOdd += i;
        }
        else
        {
            sumEven += i;
        }
    }
    cout << "Sum of odd numbers from 1 to " << n << " is " << sumOdd << endl;
    cout << "Sum of even numbers from 1 to " << n << " is " << sumEven << endl;
    return 0;
}