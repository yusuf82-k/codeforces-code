#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n-1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>a[i][j];
            }
        }
        int p=a[0][0];
        int count=0;
        int x=-1,y;
        for(int i=0;i<n;i++){
             if(a[i][0]!=p)
             {
                if(x==-1){
                x=i;
                }
                y=i;

             }

        }
        if(x==y){
            cout<<p<<" ";
            for(int i=0;i<n-1;i++){
                cout<<a[x][i]<<" ";
            }
        }
        else
        {
            cout<<a[1][0]<<" ";
            for(int i=0;i<n-1;i++){
                cout<<a[0][i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}