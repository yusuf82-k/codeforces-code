#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        cin>>a[0];
        ll count=1;
        int x=0;
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]==a[0]&&count<k){
            count++;
            if(count==k)
            x=i;
            }

        }
        ll p=a[n-1];
        ll count2=0;
        ll y=n-1;
        for(int i=n-1;i>=0;i--){
            if(a[i]==p){
                count2++;
                if(count2==k)
                y=i;
            }
        }
        if(a[0]==a[n-1]){
            if(count2>=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            if((count>=k&&count2>=k)&&(x<y))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }

    }
    return 0;
}