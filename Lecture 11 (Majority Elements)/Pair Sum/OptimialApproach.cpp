#include <iostream>

using namespace std;

void pairSum(int arr[], int n)
{
    int start = 0, end = n - 1, pairSum, target;

    cout << "Enter the target element : ";
    cin >> target;

    while (start < end)
    {
        pairSum = arr[start] + arr[end];

        if (pairSum == target)
        {
            cout << "Pair Sum is : " << start << " " << end << endl;
            return;
        }
        else if (pairSum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
}

int main()
{
    int count;
    cout << "Enter the size of array : ";
    cin >> count;
    int arr[count];

    cout << "Enter the elements : ";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    pairSum(arr, count);
    return 0;
}