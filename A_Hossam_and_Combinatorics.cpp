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
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        int mini=a[0];
        int maxi=a[n-1];
        if(maxi==mini){
            cout<<n*(n-1)<<endl;
            continue;
        }
        int cmini=0;
        int cmaxi=0;
        for(int i=0;i<n;i++){
            if(a[i]==mini)
            cmini++;
            if(a[i]==maxi)
            cmaxi++;
        }
        cout<<2*cmini*cmaxi<<endl;

    }

    return 0;
}