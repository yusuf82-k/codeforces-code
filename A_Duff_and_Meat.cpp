#include <bits/stdc++.h>
using namespace std;

// Macros
#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'

// Debug
#ifdef LOCAL
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

// Debug print functions
void _print(int x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(double x) { cerr << x; }
template <class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Main function
int32_t main() {
    fast_io();

    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n+1];
        int b[n+1];
        
        int c[n+1];
        c[0]=INT_MAX;
        for(int i=1;i<n+1;i++){
            cin>>a[i]>>b[i];
            c[i]=min(c[i-1],b[i]);
        }
        int sum=0;
        for(int i=1;i<n+1;i++){
            sum+=(a[i]*c[i]);
        }
        cout<<sum<<endl;
    }

    return 0;
}