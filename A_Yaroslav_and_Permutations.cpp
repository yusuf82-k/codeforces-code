#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
   // cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        unordered_map<ll,ll>mp;
        for(auto &x:a){
        cin>>x;
        mp[x]++;
    }

    n=(n&1)?(n+1)/2:n/2;
    for(auto p:mp){
        if(p.second>n){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    }
    return 0;
}