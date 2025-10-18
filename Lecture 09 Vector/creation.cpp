#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vech = {'a', 'b', 'c', 'd'};

    cout << "Size of vector vech is : " << vech.size() << endl;
    cout << "Elements in vector vech are : " << endl;
    cout << vech[0] << endl;
    cout << vech[1] << endl;
    cout << vech[2] << endl;
    cout << vech[3] << endl;
    return 0;
}