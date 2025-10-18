#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
    cout << "Modification of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void passByReference(int arr[], int size)
{
    // change array.

    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }

    displayArray(arr, size);
}
void inputArray(int size)
{
    int arr[size];
    cout << "Enter the values : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    passByReference(arr, size);
}
int main()
{
    int counter;
    cout << "Enter the total size of array : ";
    cin >> counter;

    inputArray(counter);
    return 0;
}