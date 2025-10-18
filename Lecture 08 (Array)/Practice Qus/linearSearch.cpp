#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target)
{
    int find, i;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Fetched Search value is : " << arr[i] << " and position is : " << i << endl;
        }
    }
    return -1;
}
void inputArray(int size)
{
    int arr[size], target;
    cout << "Enter array Elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Search value : ";
    cin >> target;
    linearSearch(arr, size, target);
}
int main()
{
    int counter;
    cout << "Enter the size of array : ";
    cin >> counter;

    inputArray(counter);
    return 0;
}