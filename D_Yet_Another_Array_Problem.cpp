#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        bool odd=false;
        bool even =false;

        vector<ll>a(n);
        for(auto &x:a){
        cin>>x;
        if(x&1)
        odd=true;
        else
        even=true;
        }
        if(odd&&even||odd){
            cout<<2<<endl;
            continue;
        }
        ll mini=INT_MAX;
        for(int i=0;i<n;i++){
              for(ll j=2;j*j<=a[i];j++){
                if(a[i]%j!=0){
                    mini=min(mini,j);
                    break;
                }
              }
        }

        ll ans=-1;
        ll mini=*min_element(a.begin(),a.end());
  
    }
    return 0;
}