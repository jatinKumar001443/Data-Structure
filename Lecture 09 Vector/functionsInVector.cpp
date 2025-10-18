#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;

    // 1) push_back() -> add value in last idx in vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    cout<<endl;
    cout << "Insert : " << vec[0] << endl;

    // 2) pop_back() -> remove value in last idx in vector
    vec.pop_back();
    cout << "Delete : " << vec[4] << endl;

    // 3) size() -> return value of size of the vector
    cout << "Size : " << vec.size() << endl;

    // 4) capacity() -> return value of exists empty spaces in vector
    cout << "Capacity : " << vec.capacity() << endl;

    // 5) at() -> return the value of specific idx;
    cout << "Specific idx : "<< vec.at(3) <<endl;

    return 0;
}