#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,d;
        cin>>n>>d;
        cout<<1<<" ";
        if(d%3==0||n>=3)
        cout<<3<<" ";
        if(d==5)
        cout<<5<<" ";
        if(d==7||n>=3)
        cout<<7<<" ";
        if(n>=6||d==9||(n>=3&&d%3==0))
        cout<<9;
        cout<<endl;

    }
    return 0;
}