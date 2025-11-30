#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        long long maxi=a[0];
        long long x=a[0];
        long long p;
        for(int i=1;i<n;i++){
             p=a[i]-x;
             maxi=max(maxi,p);
             x+=p;

        }
        cout<<maxi<<endl;
    }
    return 0;
}