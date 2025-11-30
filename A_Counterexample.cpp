#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
    //cin >> t;
    while (t--) {
        ll l,r;
        cin>>l>>r;
        ll d=r-l;
        if(d<2){
            cout<<-1<<endl;
            return 0;
        }
        if(l&1){
            if(d>=3){
                cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
            }
            else
            cout<<-1<<endl;
            return 0;
        }
        else{
            if(d>=2){
                cout<<l<<" "<<l+1<<" "<<l+2<<endl;
            }
            else
            cout<<-1<<endl;
            return 0;
        }
    }
    return 0;
}