#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i += 10)
    {
        cout << i << endl;
    }
    return 0;
}