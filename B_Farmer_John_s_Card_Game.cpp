#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>a[i][j];
        }
    for(auto &row:a){
       sort( row.begin(),row.end());
    }
    bool flag=true;
    for(int i=0;i<n&&flag==true;i++){
             if(a[i][0]>=n){
                 flag=false;
                 break;
             }
             int p=a[i][0]+n;
             for(int j=1;j<m;j++){
                 if(a[i][j]!=p){
                    flag=false;
                    break;

                 }
                 p+=n;
             }

        }
        if(!flag){
            cout<<-1<<endl;
            continue;
        }
        vector<int>b(n+1);
        for(int i=0;i<n;i++){
            b[a[i][0]]=i+1;
        }
        for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<endl;
    
    }
    return 0;
}