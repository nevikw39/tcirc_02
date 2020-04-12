#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {0, 1, 2, 3, 4};
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';
    return 0;
}