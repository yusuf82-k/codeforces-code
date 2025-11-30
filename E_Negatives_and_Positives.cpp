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
        ll sum=0;
        int count=0;
        for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            a[i]=-a[i];
            count++;
        }
        sum+=a[i];
    }
    if(count&1){
        sum=sum-*min_element(a.begin(),a.end())*2;
    }
        cout<<sum<<endl;
    }
    return 0;
}