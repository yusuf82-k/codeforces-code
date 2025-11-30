#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
        cin >> t; 

    while (t--) {
        int n;
        cin >> n;

        vector<long long int> a(n);
        int count_twos = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            while (a[i] % 2 == 0) {
                a[i] /= 2;
                count_twos++;
            }
        }

        sort(a.begin(), a.end());

        while(count_twos--){
            a[n-1]*=2;
        }
    
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}
