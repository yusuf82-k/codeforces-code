#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n+1,0);
        for(auto &x:a)
        cin>>x;
        int p;
        for(int i=0;i<n;i++){
             cin>>p;
             p=abs(p);
             b[p]+=a[i];
        }
        bool flag=true;
        ll killed=0;
       ll reserve=0;
        for(int i=1;i<=n;i++){
            int round=i-killed;
            if(round*k+reserve<b[i]){
                flag=false;
                break;
            }
            else
            {
                killed++;
                reserve=round*k+reserve-b[i];
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}