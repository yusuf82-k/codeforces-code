#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0&&c==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(a==0||c==0)
        {
            cout<<1<<endl;
            continue;
        }
        if(a*d==b*c){
            cout<<0<<endl;
            continue;
        }
        if((a*d)%(b*c)==0||(b*c)%(a*d)==0){
            cout<<1<<endl;
            continue;
        }
        cout<<2<<endl;
    }
    return 0;
}