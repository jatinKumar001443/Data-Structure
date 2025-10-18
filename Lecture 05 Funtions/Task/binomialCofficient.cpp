#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int binomialCofficient(int n, int r)
{
    int factN = factorial(n);
    int factR = factorial(r);
    int factNR = factorial(n - r);

    return (factN / (factR * factNR));
}
int main()
{
    int n, r, result;
    cout << "Enter value of n : ";
    cin >> n;
    cout << "Enter value of r : ";
    cin >> r;

    result = binomialCofficient(n, r);
    cout << "Binomial Coefficient C(" << n << "," << r << ") = " << result << endl
         << endl;
    return 0;
}