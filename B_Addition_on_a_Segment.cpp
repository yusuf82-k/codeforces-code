#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll count=0;
        ll sum=0;
        vector<ll>a(n);
        for(auto &x:a){
        cin>>x;
        if(x!=0)
        count++;
        sum+=x;
        }
        sum-=(n-1);
        cout<<min(count,sum)<<endl;

    }
    return 0;
}