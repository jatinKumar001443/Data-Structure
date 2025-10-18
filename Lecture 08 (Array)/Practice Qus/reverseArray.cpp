#include <iostream>
using namespace std;
int reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reverse Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inputDisplayArray(int size)
{
    int arr[size];
    cout << "Enter the values : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // 4 2 7 8 1 2 5
    }
    reverseArray(arr, size);
}
int main()
{
    int counter;
    cout << "Enter the size of the array : ";
    cin >> counter;

    inputDisplayArray(counter);
    return 0;
}