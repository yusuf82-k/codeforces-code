#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>a(n+1);
       // vector<ll>b;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        a[n]=q+1;
        ll total=0;
       ll count=0;
        for(int i=0;i<n+1;i++){
              if(a[i]<=q){
                count++;
              }
              else
              {
                if(count>=k){
                    ll x=count-k+1;
                    ll y=x*(x+1)/2;
                    total+=y;
                }
               
                count=0;
              }
            }
        cout<<total<<endl;
    }
    return 0;
}