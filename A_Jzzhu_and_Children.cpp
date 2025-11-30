#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
    //cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int index=0;
        int maxi=(a[0]+m-1)/m;
        for(int i=0;i<n;i++){
            if(((a[i]+m-1)/m)>=maxi){
                maxi=(a[i]+m-1)/m;
                index=i+1;
            }
        }
        cout<<index<<endl;

    }
    return 0;
}