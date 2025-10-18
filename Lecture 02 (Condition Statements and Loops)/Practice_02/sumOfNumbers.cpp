#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
        // if (i == 5)
        //     break;
    }
    cout << "Sum of first " << n << " natural numbers is : " << sum << endl;

    // int i = 1;
    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    // cout << sum << endl;
    return 0;
}
