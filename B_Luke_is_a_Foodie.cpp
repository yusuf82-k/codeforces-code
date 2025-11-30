#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        ll ub=a[0]+x;
        ll lb=a[0]-x;
        ll prev=a[0];
        for(int i=1;i<n;i++){
            if((a[i]<=ub+x)&&(a[i]>=lb-x)){
                  if(a[i]>=prev){
                    lb=max(lb,a[i]-x);
                  }
                  else
                  {
                    ub=min(ub,a[i]+x);
                  }
            }
            else{
                count++;
                prev=a[i];
                ub=a[i]+x;
                lb=a[i]-x;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}