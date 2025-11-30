#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        ll count=0;
        ll maxi=-1;
        bool found=false;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x%k==0){
                found=true;
            }
            else
            maxi=max(maxi,x%k);
            if(x%2==0)
            count++;
        }

        if(found)
        cout<<0<<endl;
        else{
            if(k==4){
                if(count>=2)
                cout<<0<<endl;
                else if(maxi==3||count==1)
                cout<<1<<endl;
                else
                cout<<2<<endl;
            }
            else
        cout<<k-maxi<<endl;
        }
    }
    return 0;
}