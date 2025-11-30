#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>a(m);
        vector<bool>b(n+2,false);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        int x;
        for(int i=1;i<k+1;i++){
            cin>>x;
            b[x]=true;
        }
        if(k<n-1){
            for(int i=0;i<m;i++)
            cout<<0;
            cout<<endl;
            continue;
        }
       else if(k==n){
        for(int i=0;i<m;i++)
        cout<<1;
        cout<<endl;
        continue;
       }
 
        for(int i=0;i<m;i++){
           if(b[a[i]]==false)
           cout<<1;
           else
           cout<<0;
        }
        cout<<endl;
    }
    return 0;
}