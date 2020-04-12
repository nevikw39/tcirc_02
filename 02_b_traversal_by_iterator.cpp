#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {0, 1, 2, 3, 4};
    for (auto itr = v.begin(); itr < v.end(); itr++) // vector<int>::iterator itr = v.begin();
        cout << *itr << '\n';
    return 0;
}