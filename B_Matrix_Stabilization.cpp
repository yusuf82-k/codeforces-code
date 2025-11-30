#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m,n;
        cin>>n>>m;
        ll a[n+2][m+2]={};
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                ll maxi=max(max(a[i][j+1],a[i][j-1]),max(a[i+1][j],a[i-1][j]));
                a[i][j]=min(maxi,a[i][j]);
            }
        }
         for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}