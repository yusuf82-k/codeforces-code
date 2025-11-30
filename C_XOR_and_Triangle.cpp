#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin>>x;
        string s="";
        int zero=-1;
        int one=-1;
        while(x>0){
              int rem=x%2;
              s+=(rem+'0');
              x>>=1;
        }
      //  reverse(s.begin(),s.end());
        for(size_t i=0;i<s.size();i++){
            if(s[i]=='1'&&one==-1)
            one=i;
            if(s[i]=='0')
            zero=i;
        }
        if(zero==-1||one==-1||(one>zero)){
            cout<<-1<<endl;
        }
        else
        cout<<(1<<zero)+(1<<one)<<endl;
    }
    return 0;
}