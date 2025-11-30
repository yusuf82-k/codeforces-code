#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x,y,k;
        cin>>x>>y>>k;
        ll total=k+y*k-1;
        x--;
         ll trades1=(total+x-1)/(x)+k;
      cout<<trades1<<endl;
}
}