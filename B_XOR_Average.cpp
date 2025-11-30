#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        if(n%2==0){
        n-=2;
        cout<<2<<" "<<6<<" ";
        }
        while(n--)
            cout<<4<<" ";
        cout<<endl;
    }
    return 0;
}