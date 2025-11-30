#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,c;
        cin>>n>>c;
        ll sqsum=0;
        ll sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sqsum+=x*x;
            sum+=x;
        }
        ll low=1;
        ll ans;
        ll high=10e9;
        while(low<=high){
            ll mid=low+(high-low)/2;
            ll total=sqsum+4*mid*mid*n+4*mid*sum;
            if(total==c){
                ans=mid;
                break;
            }
            else if(total<c){
                low=mid+1;
            }
            else
            high=mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}





//////////////flipping game/////////
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
   // cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        int cnt=0;
        vector<ll>a(n);
        for(auto &x:a){
        cin>>x;
        if(x==1)
        cnt++;
        }
        vector<int>b(n,0);
        b[n-1]=a[n-1];
        for(int i=n-2;i>=0;i++){

        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
                 int zeros=0;
            for(int j=i;j<n;j++){
                  if(a[i]==0){
                    zeros++;
                  }
                  else
                  zeros--;
                  maxi=max(maxi,zeros);

            }
        }
        cout<<cnt+maxi<<endl;
    }
    return 0;
}