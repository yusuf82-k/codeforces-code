#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k,x;
        cin>>n>>k>>x;
        vector<ll>a(n);
        for(auto &v:a)
        cin>>v;
        sort(a.begin(),a.end());
        vector<ll>sumf(n+1);
        vector<ll>sumb(n+1);
        sumf[0]=0;
        for(int i=0;i<n;i++){
            sumf[i+1]=sumf[i]+a[i];
        }
        sumb[0]=0;
        for(int i=n-1;i>=0;i--){
           sumb[n-i]=sumb[n-i-1]+a[i];
        }
       ll mini=INT_MAX;
         for(ll i=0;i<=k;i++){
            ll p=sumb[i];
            ll y=2*(sumf[n-i]-sumf[max(n-i-x,0LL)]);
            mini=min(mini,p+y);
         }
        cout<<sumf[n]-mini<<endl;


    }
    return 0;
}