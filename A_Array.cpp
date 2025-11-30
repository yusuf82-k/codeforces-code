#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
   // cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>p,ng,z;
        ll x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<0)
            ng.push_back(x);
            else if(x==0)
            z.push_back(x);
            else
             p.push_back(x);

        }
        if(p.size()==0)
        {
            for(int i=0;i<2;i++){
            p.push_back(ng.back());
            ng.pop_back();
            }

        }
        if(ng.size()%2==0)
        {
            z.push_back(ng.back());
            ng.pop_back();
        }
        cout<<ng.size()<<" ";
        for(int i=0;i<ng.size();i++)
        cout<<ng[i]<<" ";
        cout<<endl;
        cout<<p.size()<<" ";
        for(int i=0;i<p.size();i++)
        cout<<p[i]<<" ";
        cout<<endl;
        cout<<z.size()<<" ";
        for(int i=0;i<z.size();i++)
        cout<<z[i]<<" ";
        cout<<endl;



    }
    return 0;
}