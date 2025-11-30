#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x,y,k;
        cin>>x>>y>>k;
        if(x==y&&x==0){
            cout<<0<<endl;
            continue;
        }
        ll steps;
        if(x<=y){
            if(x==0)
            x++;
            ll p=(x+k-1)/k;
            steps=((x+k-1)/k)*2-1+2*((y-(p-1)*k+k-1)/k)-1;


        }
        else
        {
            ll p=(y+k-1)/k;
            steps=2*p;
            if(p*k<x){
                steps+=(2*((x-p*k+k-1)/k)-1);
            }
        }
        cout<<steps<<endl;
    }
    return 0;
}