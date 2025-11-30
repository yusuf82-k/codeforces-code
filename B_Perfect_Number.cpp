#include <bits/stdc++.h>
using namespace std;

int sumDigits(long long n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    long long k;
    cin >> k;
    long long cnt = 0, num = 0;
    while (cnt < k) {
        num++;
        if (sumDigits(num) == 10){
            cnt++;
            if(cnt<k)
            num+=8;
        }
            
    }
    cout << num << "\n";
}
