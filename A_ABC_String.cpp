#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve(){
    string s;
    cin>>s;
    int l=s.length();
    if(s[0]==s[l-1]){
        cout<<"NO"<<endl;
        return;
    }
    int count=0;
    for(int i=0;i<l;i++){
        if(s[i]==s[0]){
            count++;
        }
        else if(s[i]==s[l-1]){
            count--;
        }
        else
        count++;
        if(count<0){
           break;
        }
    }
    if(count==0){
        cout<<"YES"<<endl;
        return;
    }
         count=0;
    for(int i=0;i<l;i++){
        if(s[i]==s[0]){
            count++;
        }
        else if(s[i]==s[l-1]){
            count--;
        }
        else
        count--;
        if(count<0){
         break;
        }
    }
    if(count==0){
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
      solve();

    }
    return 0;
}