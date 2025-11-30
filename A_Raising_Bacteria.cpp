#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, sum = 0, rem;
    cin >> x;  
    while (x > 0) {
        rem = x % 2;
        x /= 2;
        sum += rem;
    }
    cout << sum;
    return 0;
}
