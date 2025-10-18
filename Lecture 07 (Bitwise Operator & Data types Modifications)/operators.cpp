#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter second value : ";
    cin >> b;

    cout << a << " and " << b << " & (AND) operator : " << (a & b) << endl;

    cout << a << " and " << b << " | (OR) operator : " << (a | b) << endl;

    cout << a << " and " << b << " ^ (XOR) operator : " << (a ^ b) << endl;

    cout << " 8 >> left shift 2 : " << (8 >> 2) << endl;

    cout << " 8 << right shift 2 : " << (8 << 2) << endl;
    return 0;
}