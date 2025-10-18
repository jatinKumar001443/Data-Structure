#include <iostream>
using namespace std;
void maximumSubarraySum(int arr[], int n) {
    int maxSum = INT32_MIN;
    for (int start = 0; start < n; start++)
    {
        int curretSum = 0;
        for (int end = start; end < n; end++)
        {
            curretSum += arr[end];
            maxSum = max(curretSum, maxSum);
        }
    }
    cout<<"Maximum Subarray Sum is: "<<maxSum<<endl;
}
int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maximumSubarraySum(arr,n);
    return 0;
}