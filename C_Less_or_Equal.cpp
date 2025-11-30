#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
   // cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(auto &x:a)
        cin>>x;
        sort(a.begin(),a.end());
        if(a[k]==a[k-1]){
           cout<<-1<<endl;

        }
        else if(k==0){
            if(a[0]>1){
                cout<<1<<endl;
            }
            else
            cout<<-1<<endl;
        }
        else
        cout<<a[k-1]<<endl;

    }
    return 0;
}