#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,index=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int z=0,o=0,t=0,th=0,f=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
            z++;
            if(a[i]==1)
            o++;
           if(a[i]==2)
            t++;
           if(a[i]==3)
            th++;
            if(a[i]==5)
            f++;
            if(z>=3&&o>=1&&t>=2&&th>=1&&f>=1){
                index=i+1;
                break;
            }
        }
        cout<<index<<endl;
    }
    return 0;
}

