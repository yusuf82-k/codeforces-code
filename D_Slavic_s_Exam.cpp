#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s,t;
        cin>>s>>t;
        int k=0;
        int i;
        for(i=0;i<s.length();i++){
            if(s[i]==t[k]||s[i]=='?'){
                if(k<=t.length()-1){
                    s[i]=t[k++];
                    if(k==t.length())
                    break;
                }
            }
        }
        for(int j=i+1;j<s.length();j++){
            if(s[j]=='?')
            s[j]='a';
        }
        if(k==t.length()){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}