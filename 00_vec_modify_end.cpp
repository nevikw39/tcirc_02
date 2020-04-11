#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    cout << "Now v contains " << v.size() << " elements.\n";
    v.push_back(6);
    cout << "After pushing, v contains " << v.size() << " elements.\n";
    v.pop_back();
    v.pop_back();
    cout << "After popping two times, v contains " << v.size() << " elements.\n";
    return 0;
}