#include<bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int d=a[1]-a[0];
        for(int i=2;i<n;i++)
        {
            if(a[i]-a[i-1]!=d)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        if(d*(n-1)==(a[n-1]-a[0])){
        cout<<"YES"<<endl;
        return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}