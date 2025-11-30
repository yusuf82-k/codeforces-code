#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count=1;
   for(int i=0;i<n;i++){
    cin>>a[i];

   }
        for(int i=1;i<n;i++){
            
            if(a[i]==a[i-1]){
                count++;
            }
            else
            {
                break;
            }
        }
       // cout<<count<<endl;
        if(count==n){
            cout<<0<<endl;
            continue;
        }
        int count2=1;
        for(int i=n-2;i>=0;i--)
         {
            if(a[i]==a[i+1]){
                count2++;
            }
            else
            {
                break;
            }
         }
         //cout<<count<<" "<<count2<<endl;

         if(a[0]==a[n-1]){
            cout<<n-(count+count2)<<endl;
            
         }
         else
         {
            cout<<n-max(count,count2)<<endl;
         }
         
    }
    return 0;
}