#include <iostream>
using namespace std;
int findSmallestElements(int arr[], int size)
{
    int smallest = INT16_MAX, largest = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main()
{
    int counter;
    cout << "Enter the value : ";
    cin >> counter;
    int elements[counter];
    cout << "Enter the values of elements : " << endl;
    for (int i = 0; i < counter; i++)
    {
        cin >> elements[i]; // 5 15 22 1 -15 24 0
    }
    cout << "Smallest and Largest Element in list of elements : " << findSmallestElements(elements, counter) << endl;
    return 0;
}