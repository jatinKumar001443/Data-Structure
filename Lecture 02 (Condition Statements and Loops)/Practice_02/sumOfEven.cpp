#include <iostream>
using namespace std;
int main()
{
    int sumEven = 0, n;
    cout << "Enter value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
    }
    cout << "Sum of even numbers from 1 to " << n << " is " << sumEven << endl;
    return 0;
}
