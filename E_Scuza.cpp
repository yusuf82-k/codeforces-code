#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int upperBound(const vector<ll>& vec, int target) {
    int low = 0, high = vec.size();
    while (low < high) {
        int mid = (low + high) / 2;
        if (vec[mid] <= target)
            low = mid + 1;
        else
            high = mid;
    }
    return low;  
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        vector<ll>b(k);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(auto &x:b)
        cin>>x;
       // vector<ll>v(n);
        vector<ll>sum(n);
        sum[0]=a[0];
     //   v[0]=a[0];
        for(int i=1;i<n;i++){
           // v[i]=max(a[i],v[i-1]);
            sum[i]=a[i]+sum[i-1];
        }
        for(int i=1;i<n;i++)
            a[i]=max(a[i],a[i-1]);
        for(int i=0;i<k;i++){
            int index=upperBound(a,b[i])-1;
            if(index==-1){
                cout<<0<<" ";
            }
            else
            cout<<sum[index]<<" ";
        }
        cout<<endl;
    }
    return 0;
}