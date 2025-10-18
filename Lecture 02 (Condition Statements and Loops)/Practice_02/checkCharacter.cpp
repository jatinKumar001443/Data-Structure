// Find character lowercase and uppercase

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter ch : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "It's lowercase : " << ch << endl;
    }
    else
    {
        cout << "It's uppercase : " << ch << endl;
    }

    return 0;
}