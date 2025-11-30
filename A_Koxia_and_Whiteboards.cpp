#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        n=n+m-1;
        long long a[n];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long last;
        cin>>last;
        sort(a,a+n,greater<long long>());
        for(int i=0;i<n-m;i++){
        sum+=a[i];
        }
        sum+=last;
        cout<<sum<<endl;
    } 
}