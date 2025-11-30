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
        for(auto &x:a)
        cin>>x;
        if(a[n-1]==-1&&a[0]==-1){
              a[n-1]=0;
              a[0]=0;
        }
        else if(a[n-1]==-1){
            a[n-1]=a[0];
        }
        else if(a[0]==-1){
            a[0]=a[n-1];
        }
        cout<<abs(a[n-1]-a[0])<<endl;
        cout<<a[0]<<" ";
        for(int i=1;i<n-1;i++)
        {
            if(a[i]==-1)
            a[i]=0;
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}