
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
    ll n;
    cin>>n;
   ll p=1;
   int count=1;
   while(p<n){
       p=2*p+2;
       //cout<<p<<" ";
       count++;
   }
   //cout<<endl;
   cout<<count<<endl;

    }
    return 0;
}