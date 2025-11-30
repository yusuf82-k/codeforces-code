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
        int n,k,flag=1;
        cin>>n>>k;
        if(n==1){
            if(k==2){
                cout<<"YES"<<endl;
                continue;
            }
            cout<<"NO"<<endl;
            continue;
        }
        else if(k>1){
            cout<<"NO"<<endl;
            continue;
        }
        else if(n%2==0&&n!=2){
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            for(int i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    cout<<"NO"<<endl;
                    flag=0;
                    break;
                }
            }
            if(flag)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }

    }

    return 0;
}