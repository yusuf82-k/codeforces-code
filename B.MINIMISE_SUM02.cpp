#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        if(a[0]<a[1])
         {
            cout<<2*a[0]<<endl;
            continue;
         }
         else
         {
            cout<<a[0]+a[1]<<endl;
            continue;
         }
    }

    return 0;
    }
