#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n+1);
        vector<bool>b(n+1,false);
        int count=0;
       // int x;
        int y;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[a[i]]=true;
            if(a[i]==0)
            {
                count++;

               //w x=i;
            }
        }
        if(count==1){
            for(int i=1;i<=n;i++){
                if(b[i]==false){
                y=i;
                break;
                }
            }
        }
        int first=-1;
        int last;
        for(int i=1;i<=n;i++){
            if(a[i]!=i){
                if(first==-1){
                    first=i;
                }
                last=i;
            }
        }
        if(last>first){
            if(y==first||y==last)
            cout<<last-first<<endl;
            else
            cout<<last-first+1<<endl;
        }
        else
        cout<<0<<endl;
    }
    return 0;
}