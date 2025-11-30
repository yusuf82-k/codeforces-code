#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count_zeros=0;
        int count=0;
         for(int i=0;i<n;i++){
            if(a[i]==0){
                count_zeros++;
            }
            else
            {
                count_zeros=0;
            }
            if(count_zeros==k){
                count++;
                count_zeros=0;
                i++;
            }
         }
         cout<<count<<endl;
    }
    return 0;
}