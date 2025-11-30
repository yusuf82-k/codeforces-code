#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        long long a[n+1];
        cin>>a[1];
        a[0]=a[1];
        for(int i=2;i<=n;i++){
            cin>>a[i];
            if(a[i]!=a[i-1]){
                flag=1;
            }
        }
        int index;
        long long maxi=*max_element(a,a+n+1);
         for(int i=1;i<n+1;i++){
            if((maxi==a[i])&&(a[i]!=a[i-1]||a[i]!=a[i+1])){
                index=i;
                break;
            }
         }
         cout<<index<<endl;
         

    }
    return 0;
}