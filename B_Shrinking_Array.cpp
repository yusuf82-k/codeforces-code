#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
        cin>>a[i];

        }
        if(n==2){
            if(abs(a[0]-a[1])<=1){
                cout<<0<<endl;
            }
            else
            cout<<-1<<endl;
            continue;
        }
        ll ans=n+1;
        ll mini=n+1;
        for(ll i=2;i<n;i++){
            
            ll mx=max(a[i-1]+1,a[i-2]+1);
             ll mn=min(a[i-2]-1,a[i-1]-1);
             for(ll j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                if(a[j]<=mx&&a[j]>=mn){
                    mini=min(mini,abs(i-j));
                }
             }
             ans=min(ans,mini);
        }
        if(ans==n+1)
        cout<<-1<<endl;
        else
         cout<<ans-1<<endl;
    }
    return 0;
}