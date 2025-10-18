// Pair Sum with Brute Force approach

#include <iostream>
#include <vector>
using namespace std;

void pairSum(int arr[], int n)
{
    int target;
    cout << "Enter the target element : ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " and " << arr[j] << endl;
            }
        }
    }
}

int main()
{

    int count, target;
    cout << "Enter the size of array : ";
    cin >> count;

    int arr[count];

    cout << "Enter the values of array : ";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    // 2, 7, 11, 15
    // target = 9

    pairSum(arr, count);
    return 0;
}