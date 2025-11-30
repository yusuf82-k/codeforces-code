#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
   // cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        vector<ll>sum(n);
        cin>>a[0];
        sum[0]=a[0];
        for(int i=1;i<n;i++){
         cin>>a[i];
          sum[i]=sum[i-1]+a[i];
        }
        int mini=sum[k-1];
        int p=k-1;
        for(int i=k;i<n;i++)
        {
            int x=sum[i]-sum[i-k];
            if(x<mini)
            {
                mini=x;
                p=i;
            }
        }
        cout<<p-k+2<<endl;

    }
    return 0;
}