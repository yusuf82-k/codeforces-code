#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        int cnt=0;
        for(auto &x:a){
        cin>>x;
        if(x==1)
        cnt++;
        }
         int maxi=INT_MIN;
         for(int i=0;i<n;i++){
          int  count=0;
            for(int j=i;j<n;j++){
                if(a[j]==0)
                 count++;
                 else
                 count--;
                 maxi=max(maxi,count);
            }
         }
         cout<<maxi+cnt<<endl;
    }
    return 0;
}