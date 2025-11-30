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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n==2){
            cout<<11<<endl;
            continue;
        }

        int x=-1;
        int p=a[0];
        cout<<1;
        for(int i=1;i<n;i++){
            if(a[i]>=p){
                cout<<1;
                p=a[i];
            }
            else if(a[i]<=a[0]){
                cout<<1;
                x=i;
                p=a[i];
                break;
            }
            else
            cout<<0;


            }
        

        for(int i=x+1;i<n&&x!=-1;i++){
            if(a[i]<=a[0]&&a[i]>=p){
                cout<<1;
                p=a[i];
            }
            else
            cout<<0;
        }
        
        
        cout<<endl;
    }

    return 0;
}   