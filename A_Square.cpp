#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
   ll a[4];
   for(int i=0;i<4;i++)
   cin>>a[i];
      sort(a,a+4);
      if(a[0]==a[3])
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;

    }
    return 0;
}