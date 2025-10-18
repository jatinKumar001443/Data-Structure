#include <iostream>
using namespace std;

int sum(int a, int b)
{
    a = 30, b = 40;
    return (a + b);
}
int main()
{
    int a = 10, b = 20;
    cout << a << " and " << b << endl;
    cout << sum(a, b) << endl;
    cout << a << " and " << b << endl;

    return 0;
}