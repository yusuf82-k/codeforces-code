#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,c;
        cin>>n>>c;
        vector<ll>a(n);
      //  for(auto &x:a)
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        a[i]+=(i+1);
      }
      sort(a.begin(),a.end());
      int count=0;
      for(int i=0;i<n;i++){
        if(a[i]<=c){
            count++;
            c-=a[i];
        }
        else
        break;
      }
      cout<<count<<endl;
        
    }
    return 0;
}