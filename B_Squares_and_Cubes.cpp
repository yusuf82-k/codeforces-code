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

    int t;
    cin >> t;
    while (t--)
    {
      int n,count=0;
      cin>>n;
      int s=sqrt(n);
      int c=cbrt(n);
      for (size_t i = 1; i*i*i <=n; i++)
      {     int x=i*i*i;
            if(sqrt(x)*sqrt(x)==x)
            {
                count++;
            }
    
      }
      
      cout<<s+c-count<<endl;
    }
    return 0;
}