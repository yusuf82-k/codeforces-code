#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        int odd =0;
        int even=0;
        for(auto &x:a){
        cin>>x;
        if(x&1)
        odd++;
        else
        even++;
        }
        if(odd==0||(even==0&&k%2==0)||(odd%2==0&&k==n)){
            cout<<"NO"<<endl;
            continue;
        }
        
        cout<<"YES"<<endl;
    }
    return 0;
}