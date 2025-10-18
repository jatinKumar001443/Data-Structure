#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // 1st Set of numbers
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        // 2nd Set of numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}