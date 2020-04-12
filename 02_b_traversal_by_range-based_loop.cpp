#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {0, 1, 2, 3, 4};
    for (int i : v)
        cout << i << '\n';
    return 0;
}