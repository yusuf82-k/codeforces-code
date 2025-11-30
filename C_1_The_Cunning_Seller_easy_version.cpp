#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<int>a;
        while(n>0){
            a.push_back(n%3);
            n/=3;
        }
    
        ll coin=0;
        for(int i=0;i<a.size();i++){
            ll x=a[i]*pow(3,i);
            coin+=(3*x+(x/3)*i);
            
        }
        cout<<coin<<endl;
    }
    return 0;
}