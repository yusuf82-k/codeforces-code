#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll odd_sum=0;
        ll even_sum=0;
        ll x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(i%2==0)
            odd_sum+=x;
            else
            even_sum+=x;

        }
        ll odd=(n%2==1)?((n+1)/2):n/2;
        ll even=n/2;
        ll odd_avg=odd_sum/odd;
        ll even_avg=even_sum/even;
        if((odd_sum%odd==0)&&(even_sum%even==0)&&(odd_avg==even_avg))
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;

    }
    return 0;
}