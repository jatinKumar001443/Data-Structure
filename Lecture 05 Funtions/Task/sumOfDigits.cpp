#include <iostream>
using namespace std;
int sumOfDigits(int num)
{
    int rem, digitSum = 0;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        digitSum += rem;
    }
    return digitSum;
}
int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;

    cout << "Sum of digits : " << sumOfDigits(num) << endl
         << endl;
    return 0;
}