#include <bits/stdc++.h>
using namespace std;
int32_t main() {
    int t=1;
     //cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int count=0;
        int maxi=0;
        int block=-1;
        int x;
        for(int i=0;i<=n;i++){
            if(a[i]==1){
                count++;
            }
            else{
                maxi=max(maxi,count);
                if(block==-1)
                block=count;
                x=count;
                count=0;
            }
        }
       // cout<<x<<" "<<count<<" "<<block<<endl;
        maxi=max(count,maxi);
        if(a[n-1]==1&&a[0]==1){
            maxi=max(maxi,block+x);
            
        }
        cout<<maxi<<endl;
        
    }
    

    return 0;
}