#include <bits/stdc++.h>
using namespace std;

int first_occurrence(vector<int>& a, int x) {
    int low = 0, high = a.size() - 1, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == x) {
            ans = mid;
            high = mid - 1; // keep searching left
        } else if (a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

int last_occurrence(vector<int>& a, int x) {
    int low = 0, high = a.size() - 1, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == x) {
            ans = mid;
            low = mid + 1; // keep searching right
        } else if (a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

int main() {
    vector<int> a(10);
    // = {1, 2, 2, 2, 3, 4, 4, 5};
    int x = 2;
    for(auto &y:a){
        cin>>y;
    }

    int first = first_occurrence(a, x);
    int last = last_occurrence(a, x);

    if (first == -1)
        cout << "Element not found\n";
    else
        cout << "Frequency of " << x << " = " << (last - first + 1) << endl;
}
