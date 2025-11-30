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
        ll ans=0;
        for(auto &x:a){
            cin>>x;
            ans^=x;
        }
        if(n%2==0&&ans!=0)
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }
    return 0;
}