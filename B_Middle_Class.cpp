#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);

        for(int i=0;i<n;i++)
        cin>>a[i];
        ll sum=0;
        int count=0;
        sort(a.begin(),a.end(),greater<ll>());
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum/(i+1)>=x)
            count++;
            else
            break;
        }
        cout<<count<<endl;
    }
    return 0;
}