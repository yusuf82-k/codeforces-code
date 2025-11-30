#include<bits\stdc++.h>
using namespace std;
using ll =long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll total=0;
        ll mini=LLONG_MAX;
        ll mini2=LLONG_MAX;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            ll b[m];
            for(int i=0;i<m;i++){
                cin>>b[i];
            }
            sort(b,b+m);
              mini=min(mini,b[0]);
              total+=b[1];
              mini2=min(mini2,b[1]);

        
        }
         total=total+mini-mini2;
         cout<<total<<endl;
    }
    return 0;
}