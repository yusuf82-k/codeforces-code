#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
       vector<int>a(n+1),b(n);
       int x;
        for(int i=0;i<n;i++){
            cin>>x;

            if(a[x]==0){
                a[x]=1;
                b[i]=x;
            }
            

        }
        queue<int>q;
        for(int i=1;i<=n;i++){
            if(a[i]==0){
                q.push(i);
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]==0){
                b[i]=q.front();
                q.pop();
            }
        }
        for(int i=0;i<n;i++){
           cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}