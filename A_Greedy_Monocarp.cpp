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
        for(auto &x:a){
            cin>>x;
        }
        sort(a.begin(),a.end(),greater<ll>());
        ll sum=0;
        for(int i=0;i<n;i++){
             if(sum+a[i]<=k){
                sum+=a[i];
             }
             else
             break;
        }
        cout<<k-sum<<endl;

    }
    return 0;
}