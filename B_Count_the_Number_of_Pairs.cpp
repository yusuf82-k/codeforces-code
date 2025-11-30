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
        int n,k;
        string s;
        cin>>n>>k>>s;
        int freq[26]={0};
        int freqA[26]={0};
        for(int i=0;i<n;i++){
            if(s[i]>='a'&&s[i]<='z'){
                freq[s[i]-'a']++;
            }
            else
            {
                freqA[s[i]-'A']++;
            }
        }
        int count=0;
        int avail=0;
        for(int i=0;i<26;i++){
            count+=min(freq[i],freqA[i]);
           avail+=abs(freq[i]-freqA[i])/2;
            
        }
          count+=min(avail,k);

           cout<<count<<endl;

    }

    return 0;
}