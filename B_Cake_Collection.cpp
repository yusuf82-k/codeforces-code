#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
       ll n,m;
       cin>>n>>m;
       vector<int>a(n);
       for(int i=0;i<n;i++)
       cin>>a[i];
       ll cake=0;
       sort(a.begin(),a.end());
       for(int i=n-1;i>=0;i--){
              if(m>0){
                cake+=a[i]*m;
                m--;
              }
            }
                cout<<cake<<endl;

    }
    return 0;
}