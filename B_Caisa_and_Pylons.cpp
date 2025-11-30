#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
    //cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n+1);
        a[0]=0;
        for(int i=1;i<=n;i++)
        cin>>a[i];
        ll cost=0;
        ll energy=0;
        for(int i=1;i<=n;i++){
            if(a[i]>=a[i-1]){
                 if(a[i]-a[i-1]>=energy){
                    cost+=(a[i]-a[i-1]-energy);
                    energy=0;
                 }
                 else{
                    energy-=(a[i]-a[i-1]);
                 }
            }
            else
            energy+=a[i-1]-a[i];
        }
        cout<<cost<<endl;
    }
    return 0;
}