#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        int x=0;
        for(auto &v:a){
            cin>>v;
            x^=v;
        }
        int ans;
        for(int v:a){
            if(x^v==v){
               ans=v;
               break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}