#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
   // cin >> t;
    while (t--) {
        ll n;
        cin>>n;
       // vector<ll>a(n);
       // vector<ll>b(n-1);
       // vector<ll>c(n-2);
        ll i=n;
        ll sum1=0;
        ll x;

        while(i--){
          cin>>x;
          sum1+=x;
        }
        ll sum2=0;
          i=n-1;
        while(i--){
            cin>>x;
            sum2+=x;
        }
        ll sum3=0;
        i=n-2;
        while(i--){
            cin>>x;
            sum3+=x;
        }
        cout<<sum1-sum2<<endl;
        cout<<sum2-sum3<<endl;
    }
    return 0;
}