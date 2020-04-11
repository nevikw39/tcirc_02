#include <iostream>
#include <vector>
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
    vector<int> v{0, 1, 2, 3, 4};
    print_vec(v);
    cout << "Insert 87 at 2nd position.\n"; // {0, 1, 2, 3, 4}
    v.insert(v.begin() + 2, 87);            //        ^
    print_vec(v);
    cout << "Erasing the element at 3rd position.\n"; // {0, 1, 87, 2, 3, 4}
    v.erase(v.begin() + 3);                           //            ^
    print_vec(v);
    return 0;
}