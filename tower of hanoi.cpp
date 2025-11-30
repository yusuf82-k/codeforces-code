#include <iostream>
using namespace std;

void TOH(int n, char from, char aux, char to) {
    if (n == 1) {
        cout << from << " -> " << to << endl;
        return;
    }
    TOH(n - 1, from, to, aux);   // Move n-1 disks from source to auxiliary
    cout << from << " - > " << to << endl;  // Move nth disk
    TOH(n - 1, aux, from, to);   // Move n-1 disks from auxiliary to destination
}

int main() {
    int n;
    cin >> n;   // Input number of disks
    TOH(n, 'A', 'B', 'C');
    return 0;
}
