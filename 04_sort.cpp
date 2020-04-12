#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <typename T>
void print_vec(const vector<T> &v)
{
    cout << "v contains: {";
    for (const T &i : v)
        cout << i << ", ";
    cout << "\b\b}.\n";
}
int main()
{
    vector<int> v{87, 69, 64, 8964, 9487, 92, 426, 817};
    cout << "Before ---";
    print_vec(v);
    sort(v.begin(), v.end());
    cout << "After  ---";
    print_vec(v);
    return 0;
}