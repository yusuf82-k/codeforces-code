
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int cards(int h){
    ll x=(3*h*h+h)/2;
    return x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int cnt=0;
        while(n>=2){
            int l=1;
             cnt++;
            int low=1;
            int high=30000;
            while(low<=high){
                int mid=low+(high-low)/2;
                int x=cards(mid);
                if(x<=n){
                      low=mid+1;
                      l=x;
                }
                else
                high=mid-1;

            }
            n-=l;
        }
        cout<<cnt<<endl;
    }
    return 0;
}