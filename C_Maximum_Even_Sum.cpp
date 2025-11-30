#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a,b;
       cin>>a>>b;
       int ap=a%2;
       int bp=b%2;
       if(ap==0&&bp==0)
       {
        cout<<(a*b)/2+2<<endl;
        continue;
       } 
       if(ap==1&&bp==1){
        cout<<a*b+1<<endl;
        continue;
       }
       if(ap==0&&bp==1)
       {
        cout<<-1<<endl;
        continue;
       }
       if(ap==1&&bp==0){
        if(b%4==0){
           cout<<(a*b)/2+2<<endl;
        }
        else
        cout<<-1<<endl;
       }
    }
    return 0;
}