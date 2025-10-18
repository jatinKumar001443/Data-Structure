#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int majorityElements(vector<int> items)
{
    int freq = 1, ans = items[0], n = items.size();

    sort(items.begin(), items.end());

    for (int i = 0; i < n; i++)
    {
        if (items[i] == items[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = items[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
}
int main()
{
    vector<int> items;
    int n, values;

    cout << "Enter the size of vector : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> values;
        items.push_back(values);
    }

    cout << "Majority Elements : " << majorityElements(items) << endl;

    return 0;
}