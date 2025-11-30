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
    // cin >> t;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=max((3*a)/10,(a*(250-c)/250));
        int y=max((3*b)/10,(b*(250-d)/250));
        if(x==y){
            cout<<"Tie"<<endl;

        }
        else if(x>y){
            cout<<"Misha"<<endl;
        }
        else
        cout<<"Vasya"<<endl;

    }

    return 0;
}