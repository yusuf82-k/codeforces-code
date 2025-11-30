#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,m,q,maxi,mini,d;
        cin>>n>>m>>q>>maxi>>mini>>d;
        if(maxi<mini)
        swap(maxi,mini);
        if(d<mini){
        cout<<mini-1<<endl;
        continue;
        }
        if(d>maxi){
            cout<<n-maxi<<endl;
            continue;
        }
        cout<<(maxi-mini)/2<<endl;

    }
    return 0;
}