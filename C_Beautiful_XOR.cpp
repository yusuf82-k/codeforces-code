#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin>>a>>b;
        if(b>a){
            cout<<-1<<endl;
            continue;
        }
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        vector<int>x;
        while(a>0){
            x.push_back(a%2);
            a/=2;
        }
        vector<int>y(x.size(),0);
        int i=0;
        while(b>0){
            y[i++]=b%2;
            b/=2;
        }
        vector<int>z;
        for(int j=0;j<x.size();j++){
            if(x[j]!=y[j]){
                z.push_back(j);
            }
        }
        cout<<z.size()<<endl;
        for(int i=0;i<z.size();i++){
            int p=1<<z[i];
            cout<<p<<" ";
        }
        cout<<endl;

        
    }
    return 0;
}