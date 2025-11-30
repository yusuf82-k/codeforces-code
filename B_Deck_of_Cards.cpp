#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,l;
        string s;
        cin>>n>>l>>s;
        if(n==1){
            cout<<"-"<<endl;
            continue;
        }
        if(l==n){
            for(int i=0;i<n;i++)
            cout<<"-";
            cout<<endl;
            continue;
        }
        ll j=0;
        ll k=n-1;
       ll count=0;
        ll ones=0;
        ll zeros=0;
        for(int i=0;i<l;i++){
      
               if(s[i]=='0') {
                j++;
               }
               if(s[i]=='1'){
                k--;
               }
               if(s[i]=='2'){
                count++;
               }
            
        }
        ll x=k-j+1;
        if(x%2==0){
            x=(x-1)/2;
        }
        else
        x=x/2;
        for(int i=0;i<j;i++){
            cout<<"-";
        }
        if(count<=x){
            for(int i=0;i<count;i++)
            cout<<"?";
            for(int i=0;i<(k-j+1-2*count);i++)
            cout<<"+";
            for(int i=0;i<count;i++)
            cout<<"?";
        }
        else if(count<k-j+1){
            for(int i=0;i<k-j+1;i++)
            cout<<"?";

        }
        for(int i=n-1;i>k;i--)
          cout<<"-";
          cout<<endl;
    }
    return 0;
}