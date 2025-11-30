#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

long long calculate_gcd(long long a, long long b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long calculate_lcm(long long a, long long b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }

    return (a / calculate_gcd(a, b)) * b;
}

long long sum_of_first_n(long long k)
{
    if (k <= 0)
    {
        return 0;
    }
    return k * (k + 1) / 2;
}

void solve()
{

    long long n, x, y;

    cin >> n >> x >> y;

    long long Px = n / x;
    long long Py = n / y;

    long long L = calculate_lcm(x, y);

    long long PL = n / L;

    long long fx = Px - PL;
    long long fy = Py - PL;

    long long sumy = sum_of_first_n(fy);

    long long sumx = fx * (2 * n - fx + 1) / 2;

    long long result = sumx - sumy;

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}