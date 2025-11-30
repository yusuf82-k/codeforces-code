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
        for(int i=0;i<n;i++)
        cin>>a[i];
        ll cost=0;
        sort(a.begin(),a.end(),greater<ll>());
        for(int i=1;i<n;i+=2){
            if(k>a[i-1]-a[i]){
            k-=(a[i-1]-a[i]);
            }
            else{
            cost+=(a[i-1]-a[i]-k);
            k=0;
            }
            
        }
        if(n%2==1){
            cost+=a[n-1];
        }
        cout<<cost<<endl;
    }
    return 0;
}