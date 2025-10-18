#include <iostream>
#include <vector>
using namespace std;

int majorityElements(vector<int> vec)
{
    int n = vec.size();
    for (int val : vec)
    {
        int freq = 0;
        for (int ele : vec)
        {
            if (ele == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
}

int main()
{
    int size, value;
    vector<int> vec;

    cout << "Enter the size of vector : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> value;
        vec.push_back(value);
    }

    int majele = majorityElements(vec);
    cout << "Majority Elements is : " << majele << endl;
    return 0;
}