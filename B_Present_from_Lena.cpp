#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void line(int n,int x){
  
        for(int i=1;i<=(n-x);i++){
        cout<<" "<<" ";
    }
    if(x==0){
        cout<<0<<endl;
        return;
    }

    for(int i=0;i<=2*x-1;i++){

        if(i<=x){
            cout<<i<<" ";
        }
        else
        {
            cout<<x-(i%x)<<" ";
        }
    }

    cout<<0<<endl;
}
int main() {
    int t=1;
   // cin >> t;
    while (t--) {
        int n;
        cin>>n;
        for(int i=0;i<=2*n-1;i++){
            if(i<=n){
                line(n,i);
            }
            else
            line(n,(n-(i%n)));
        }
        line(n,0);
    }
    return 0;
}