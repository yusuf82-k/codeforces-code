#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n;
        vector<int>a(n);
        int maxi1=0;
        int sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            maxi1=max(maxi1,sum);
        }
        cin>>m;
        vector<int>b(m);
        int maxi2=0;
        sum=0;
        for(int i=0;i<m;i++)
        {
              cin>>b[i];
              sum+=b[i];
              maxi2=max(maxi2,sum);
        }
        cout<<maxi1+maxi2<<endl;
    }
    return 0;
}