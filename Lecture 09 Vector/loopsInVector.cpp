#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> vec; // empty vector of integers
    int value;
    cout << "Size: " << vec.size() << endl; // 0
    cout << "Pushing back 5 elements" << endl
         << "Enter values : " << endl;

    for (int i = 1; i <= 5; i++)
    {
        int value;
        cin >> value;
        vec.push_back(value);
    }
    cout << "Elements in vector are : " << endl;
    for (int ele : vec)
    {
        cout << ele << endl;
    }

    cout << "After insertion elements size of vector : " << vec.size() << endl;

    cout << "Capacity: " << vec.capacity() << endl; // 0
    return 0;
}