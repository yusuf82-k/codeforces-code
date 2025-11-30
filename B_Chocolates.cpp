#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
   // cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
        cin>>a[i];
        }
        ll total=a[n-1];
        ll maxi=a[n-1]-1;
        for(int i=n-2;i>=0;i--){
               if(maxi==0){
                break;
             }
             total+=min(maxi,a[i]);
             if(maxi>a[i])
             maxi=a[i]-1;
            else
             maxi--;
          
        }
        cout<<total<<endl;
    }
    return 0;
}