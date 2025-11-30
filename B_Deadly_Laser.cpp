#include <bits/stdc++.h>
using namespace std;

// Macros
#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'

// Debug
#ifdef LOCAL
#define debug(x)         \
    cerr << #x << " = "; \
    _print(x);           \
    cerr << endl;
#else
#define debug(x)
#endif

// Debug print functions
void _print(int x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(double x) { cerr << x; }
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

// Fast I/O
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Main function
int32_t main()
{
    fast_io();

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m, x, y, d;
        cin >> n >> m >> y >> x >> d;
        int right = x + d < m;
        int up = y - d > 1;
        int left = x - d > 1;
        int down = y + d < n;
        if ((right && up) || (left && down))
            cout << m + n - 2 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}