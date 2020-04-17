#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{87, 69, 64, 87, 8964, 9487, 92, 87, 426, 817}; // 87, 69, 64, 87, 8964, 9487, 92, 87, 426, 817
    sort(v.begin(), v.end());                                    // 64, 69, 87, 87, 87, 92, 426, 817, 8964, 9487
    auto l = lower_bound(v.begin(), v.end(), 87);                //         ^
    auto u = upper_bound(v.begin(), v.end(), 87);                //                     ^
    cout << "lower_bound of 87 at position " << (l - v.begin()) << '\n'
         << "upper_bound of 87 at position " << (u - v.begin()) << '\n';
    l = lower_bound(v.begin(), v.end(), 689);
    u = upper_bound(v.begin(), v.end(), 689);
    cout << "lower_bound of 689 at position " << (l - v.begin()) << '\n'
         << "upper_bound of 689 at position " << (u - v.begin()) << '\n';
    return 0;
}