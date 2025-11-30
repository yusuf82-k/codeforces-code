#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=1;i<n;i++){
            cin>>a[i];
        }
       vector<ll>b(n);
       b[0]=a[1]+1;
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i+1]){
                b[i]=a[i];
            }
            else{
                b[i]=((a[i+1]+b[i-1]-1)/b[i-1])*b[i-1]+a[i];
            }
        }
        b[n-1]=b[n-2]+a[n-1];
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}