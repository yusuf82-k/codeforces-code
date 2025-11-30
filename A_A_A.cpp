#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const int MOD=10e7+9;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        ll sum=0;
        for(int i=1;i<n;i++){
          sum=((sum%MOD)+(2*i*i+i)%MOD)%MOD;
        }
        cout<<((sum+n*n)%MOD)*2022<<endl;
    }
    return 0;
}