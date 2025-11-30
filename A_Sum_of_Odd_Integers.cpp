#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        if(n%2!=k%2||n<k*k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        

    }
    return 0;
}