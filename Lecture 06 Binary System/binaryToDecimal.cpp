#include <iostream>
using namespace std;
int binaryToDecimal(int num)
{
    int decimalNumber = 0, rem, pow = 1;

    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        decimalNumber += rem * pow;
        pow *= 2;
    }
    return decimalNumber;
}
int main()
{
    int binaryNumber;

    cout << "Enter a binary number : ";
    cin >> binaryNumber;

    cout << "The decimal equivalent is : " << binaryToDecimal(binaryNumber) << endl;
    return 0;
}