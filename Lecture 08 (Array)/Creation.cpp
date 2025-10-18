#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int marks[] = {60, 70, 80, 90, 100};

    cout << arr[0] << endl;
    cout << marks[4] << endl;

    cout << "Size of array : " << sizeof(arr) << endl;
    cout << "Total blocks elements of array : " << sizeof(arr) / sizeof(int) << endl;
    cout << "Address of array elements : " << &arr[0] << endl;
    cout << "Value of array elements : " << arr[0] << endl;

    return 0;
}