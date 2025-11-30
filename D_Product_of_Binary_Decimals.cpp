#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve(){
      ll n;
     cin>>n;
     if(n==1){
        cout<<"YES"<<endl;
        return;
     }
     ll p=n;
     int count=0;
     while(p>0){
        int rem=p%10;
        if(rem>1){
            count++;
        }
        p/=10;
     }
     if(!count){
        cout<<"YES"<<endl;
        return;
     }
     int f[31]={10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111,100000};
        for(int i=0;i<31&&n>1;i++){
           if(n%f[i]==0){
               n/=f[i];
               i=-1;
           }
        }
        if(n==1){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}