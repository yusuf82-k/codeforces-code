#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        int b[n]={0};
        int p=a[n-1];
        for(int i=n-1;i>=0;i--){
             if(a[i]!=0||p!=0){
                b[i]=1;
                p=max(a[i],p);
                p--;
             }
             
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}