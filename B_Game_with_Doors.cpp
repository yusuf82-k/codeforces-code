#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int L=max(a,c);
        int r=min(b,d);
        if(b<c||d<a){
            cout<<1<<endl;
            continue;
        }
        if(a==c&&b==d){
            cout<<b-a<<endl;
            continue;
        }
        if(a==c)
        {
            cout<<r-a+1<<endl;
            continue;
        }
        if(b==d){
            cout<<d-L+1<<endl;
            continue;
        }
        cout<<r-L+2<<endl;

    }
    return 0;
}