#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll maxi=*max_element(a.begin(),a.end());
        ll mini=*min_element(a.begin(),a.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(maxi==a[i])
            count++;
        }
        if(maxi>mini+k+1||(maxi==mini+k+1&&count>1))
        {
            cout<<"Jerry"<<endl;
            continue;
        }
            if(sum%2){
                cout<<"Tom"<<endl;
            }
            else
            cout<<"Jerry"<<endl;
        
        
    }
    return 0;
}