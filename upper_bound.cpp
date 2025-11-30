#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 30, 35, 40};

    // Find the first element > 30
    auto it = upper_bound(v.begin(), v.end(), 30);
    // 'it' points to v[4] (35) because 35 > 30.

    // Find the first element > 33
    it = upper_bound(v.begin(), v.end(), 33);
    // 33 is not present. 'it' still points to v[4] (35) because 35 > 33.

    cout << "Index: " << (it - v.begin()) << ", Value: " << *it << endl;
    // Output: Index: 4, Value: 35

    return 0;
}