#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x = 100;

    cout << setiosflags(ios::fixed)
         << setiosflags(ios::showpoint)
         << setprecision(3) << x << endl;

    return 0;
}
