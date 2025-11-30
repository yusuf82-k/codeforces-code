#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n);
        unordered_map<ll,ll>mp;
        for(auto &x:v)
        {
            cin>>x;
            mp[x]=1;
        }
        ll count=0;
        int a[m],b[m],c[m];
        for(int i=0;i<m;i++){
            cin>>a[i]>>b[i]>>c[i];
        }
        for(int i=0;i<2;i++){
            for(int i=0;i<m;i++){
                if(mp[a[i]]>0&&mp[b[i]]>0){
                    if(mp[c[i]]==0){
                        count++;
                        mp[c[i]]=1;
                    }
           
                }
            }
        }
        cout<<v.size()+count<<endl;
        
    }
    return 0;
}