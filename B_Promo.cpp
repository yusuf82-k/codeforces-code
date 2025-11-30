#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n, greater<int>());
    long long b[n];
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
       b[i]=b[i-1]+a[i];
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        if(x==y){
            cout<<b[x-1]<<endl;
        }
        else
        cout<<b[x-1]-b[x-y-1]<<endl;
    }
    return 0;
}