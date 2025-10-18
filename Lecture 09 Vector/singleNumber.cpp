// Single Number

#include <iostream>
#include <vector>
using namespace std;

void findSingleNumber(vector<int> &vec)
{
    int ans = 0;
    for (int ele : vec)
    {
        ans ^= ele;
    }
    cout << "Single value of is : " << ans << endl;
}

int main()
{
    vector<int> vec;

    int n, value;
    cout << "Enter total number of store value : ";
    cin >> n;
    cout << "Enter values : ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        vec.push_back(value);
    }
    findSingleNumber(vec);

    return 0;
}