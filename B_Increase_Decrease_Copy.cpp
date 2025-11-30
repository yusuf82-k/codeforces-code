#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n),b(n+1);
        for(int i=0;i<n;i++)
        cin>>a[i];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
          cin>>b[i];
          sum+=abs(a[i]-b[i]);
         
        }

        cin>>b[n];
        ll mini=INT_MAX;
        bool flag=false;
        for(int i=0;i<n;i++){
           ll mx=max(a[i],b[i]);
           ll mn=a[i]+b[i]-mx;
           if(b[n]<=mx&&b[n]>=mn){
               flag=true;
           }
           else{
              mini=min(mini,min(abs(b[n]-a[i]),abs(b[n]-b[i])));
           }

        }
        if(flag){
            cout<<sum+1<<endl;
            continue;
        }
        cout<<sum+1+mini<<endl;
    }
    return 0;
}