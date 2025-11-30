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
     cin >> t;
    while (t--) {
        int n,op;
        cin>>n;
        int a[n];
        int x=1;
        for (int i = 0; i < n; i++)
        { 
            cin>>a[i];
            if(a[i]==x){
                x++;
            }
            /* code */
        }
        if(x==n+1){
            op=0;
        }
        else if(a[0]==1||a[n-1]==n)
        op=1;
        else
        op=2;
        cout<<op<<endl;

        
    }

    return 0;
}