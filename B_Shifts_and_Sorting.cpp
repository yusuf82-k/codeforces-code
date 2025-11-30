#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        ll cost=0;
        int k=0;
        bool one=false;
        bool zero=false;
        for(int i=0;i<s.length();i++){
                 if(s[i]=='0'){
                    if(i!=k){
                        cost+=(i-k+1);
                    
                    zero=true;
                 }
                 k++;
                }
                 else{
                    one=true;
                 }
                
            }
            if(zero&&one)
        cout<<cost<<endl;
        else
        cout<<0<<endl;
    }
    return 0;
}