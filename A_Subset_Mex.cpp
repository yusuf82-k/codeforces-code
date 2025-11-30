#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
       // int b[n]={0};
        int cnt_0=0;
        a[0]=-1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==0){
                cnt_0++;
            }
        }
        if(cnt_0==0){
            cout<<0<<endl;
            continue;
        }
        sort(a,a+n+1);
        int b[a[n]+1]={0};
        int x=0;
        for(int i=1;i<=n;i++){
           if(x==a[i]&&a[i]!=a[i-1]){
            x++;
           }
           b[a[i]]++;
        }
        int y=0;
        for(int i=0;i<a[n]+1;i++){
            if(b[i]<2){
                y=i;
                break;
            }
        }
       // cout<<x<<" "<<y<<endl;
        cout<<x+y<<endl;
    }
    return 0;
}