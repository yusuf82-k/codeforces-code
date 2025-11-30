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
        int n;
        cin>>n;
        int a[n];
        int pre[n];
        pre[0]=INT_MAX;
        int suf[n];
        cin>>a[0];
        pre[0]=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            pre[i]=min(pre[i-1],a[i]);

        }
        suf[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
              suf[i]=max(suf[i+1],a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]==pre[i]||a[i]==suf[i])
            cout<<1;
            else
            cout<<0;
        }
        cout<<endl;
    }

    return 0;
}