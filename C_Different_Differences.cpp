#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>k>>n;
        ll prev=1;
        ll d=0;
        ll x;
        int count=0;
        while(count<k){
           // count++;
         x=prev+d;
            if(n-x<k-count-1)
            {
                break;
            }
            cout<<x<<" ";
            count++;
            prev=x;
            d++;
        }
        for(int i=0;i<k-count;i++)
        {
            cout<<prev+1<<" ";
            prev++;
        }
        cout<<endl;

    }
    return 0;
}