#include <iostream>
#include <climits> // Include climits for INT_MIN
using namespace std;
void maximumSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN, currentSum = 0; // Use INT_MIN
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "Maximum subarray sum is : " << maxSum << endl;
}
int main()
{
    int count;
    cout << "Enter the size of the array : ";
    cin >> count;
    int arr[count];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    maximumSubarraySum(arr, count);
    return 0;
}