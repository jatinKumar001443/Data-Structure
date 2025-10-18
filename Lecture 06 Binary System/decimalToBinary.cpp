#include <iostream>
using namespace std;
int decimalToBinary(int num)
{
    int binaryNumber = 0, rem, pow = 1;

    while (num > 0)
    {
        rem = num % 2;
        num /= 2;
        binaryNumber += rem * pow;
        pow *= 10;
    }
    return binaryNumber;
}
int main()
{
    int binaryNumber;

    cout << "Enter a decimal number : ";
    cin >> binaryNumber;

    cout << "The binary equivalent is : " << decimalToBinary(binaryNumber) << endl;
    return 0;
}