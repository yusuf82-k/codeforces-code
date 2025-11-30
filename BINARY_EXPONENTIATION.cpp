#include <bits/stdc++.h>
using namespace std;

// Binary exponentiation without modulo
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) 
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

// Binary exponentiation with modulo
long long modpow(long long a, long long b, long long mod) {
    long long res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    long long a = 105, b = 4;
    long long mod = 1e9 + 7;

    cout << "105^9 = " << binpow(a, b) << endl;
    cout << "105^9 % mod = " << modpow(a, b, mod) << endl;

    return 0;
}
