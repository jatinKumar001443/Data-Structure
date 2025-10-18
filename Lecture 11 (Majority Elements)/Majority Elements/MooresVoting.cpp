#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElements(vector<int> items)
{
    int freq = 0, ans = 0, n = items.size();

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = items[i];
        }
        if (ans == items[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}
int main()
{
    vector<int> items;
    int count, value;

    cout << "Enter the size of vector : ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> value;
        items.push_back(value);
    }

    cout << "Majority Elements : " << majorityElements(items) << endl;

    return 0;
}