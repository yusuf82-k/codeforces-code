#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        bool odd=false;
        bool even=false;
        for(auto &x:a){
        cin>>x;
        if(x%2==1)
        odd=true;
        else
        even=true;
        }
        if(odd&&even){
            sort(a.begin(),a.end());
            for(auto x:a)
            cout<<x<<" ";
            cout<<endl;
        }
        else
        {
            for(auto x:a)
            cout<<x<<" ";
            cout<<endl;
        }
    
    }
    return 0;
}