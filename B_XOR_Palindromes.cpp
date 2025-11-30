#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;
        int m=0;
        int p=0;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-1-i])
            p++;
            else
            m++;
        }
        int up=m+p*2;
        if(n&1){
        for(int i=0;i<n+1;i++){
               if(i<m||i>up+1){
                  cout<<0;
               }
               else
               cout<<1;
        }
        cout<<endl;
    }
    
    else{
        int k=1;
        for(int i=0;i<n+1;i++){
        if(i<m||i>up)   
        cout<<0;
        else{
            cout<<k;
            k^=1;
        }
    }
    cout<<endl;
    }

    
    }
    return 0;
}