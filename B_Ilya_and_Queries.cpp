#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
    //cin >> t;
    while (t--) {
        string s;
        int m;
        cin>>s>>m;
        vector<int>a(s.length()+1);
        for(int i=1;i<s.length();i++){
             if(s[i]==s[i-1]){
                a[i+1]=a[i]+1;
             }
             else
             a[i+1]=a[i];
        }
        while(m--){
            int l,r;
            cin>>l>>r;
            cout<<a[r]-a[l]<<endl;
        }
      //  for(int i=0;i<s.length()+1;i++)
       // cout<<a[i]<<" ";

    }
    return 0;
}