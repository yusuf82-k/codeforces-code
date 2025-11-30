#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a,b,c;
        cin>>a>>b>>c;
        ll total=a+b+c;
        if(total%9){
        cout<<"NO"<<endl;
        continue;
        }
        ll x=total/9;
        if(a<x||b<x||c<x)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
    return 0;
}