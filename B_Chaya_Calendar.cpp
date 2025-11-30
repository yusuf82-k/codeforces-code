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
        for(auto &x:a){
            cin>>x;
        }
        ll prev=a[0];
        for(int i=1;i<n;i++){
          prev= ((prev+a[i])/a[i])*a[i];
        }
        cout<<prev<<endl;
    }
    return 0;
}



and the title of the thesis is below
performance evaluation of full rate space-time block code for multiple input single output (MISO) wireless communication system