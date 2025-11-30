#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
  //  cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        cin>>a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            a[i]+=a[i-1];
        }
        ll m;
        cin>>m;
        while(m--){
            ll q;
            cin>>q;
            auto it=(lower_bound(a.begin(),a.end(),q));
            cout<<(it-a.begin())+1<<endl;
        }
        
        
    }
    return 0;
}