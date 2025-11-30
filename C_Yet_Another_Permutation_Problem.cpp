#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<bool>a(n+1,false);
        for(int i=2;i<=n/2;i++){
              if(a[i]==false){
                int j=i;
                while(j<=n){
                    a[j]=true;
                    cout<<j<<" ";
                    j*=2;
                }
              }
        }
        for(int i=1;i<=n;i++){
            if(a[i]==false)
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}