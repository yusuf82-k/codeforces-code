
//gcd using simple loop

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


// gcd using recursion
int gcd(int a, int b) {
    if (b == 0)  // base case
        return a;
    return gcd(b, a % b); // recursive call
}


//lcm
#include <iostream>
using namespace std;

// Recursive GCD
int gcd(int a, int b) {
    if (b == 0) // base case
        return a;
    return gcd(b, a % b); // recursive call
}

// LCM using GCD
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; 
}

int main() {
    int a = 48, b = 18;
    cout << "GCD: " << gcd(a, b) << "\n";
    cout << "LCM: " << lcm(a, b) << "\n";
}
//////////////


void sieve(int n) {
    vector<bool> isPrime(n + 1, true); // initially assume all are prime
    isPrime[0] = isPrime[1] = false;   // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false; // mark multiples of i as not prime
            }
        }
    }

    // Printing primes
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) cout << i << " ";
    }
    cout << "\n";
}



//////////
//prime factorization
#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

void sieve(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
}

void primeFactors(int n) {
    for (int p : primes) {
        if (p * p > n) break;
        while (n % p == 0) {
            cout << p << " ";
            n /= p;
        }
    }
    if (n > 1) cout << n;
}

int main() {
    sieve(100000); // Precompute primes up to 10^5
    int n;
    cin >> n;
    primeFactors(n);
}
